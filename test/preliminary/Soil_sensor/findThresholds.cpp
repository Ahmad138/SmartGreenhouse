/**************************************************************************/
/*!
 *  @file findThresholds.cpp
 *  @author I. Mitchell
 *  @brief Using GPIO pin 6 of the Raspberry Pi to charge/discharge the
 *    soil moisture probe and determine the different readings for wet and dry
 *    soil.
 *  @version 0.1
 *  @date 2019-04-09
 *  @copyright Copyright (c) 2019
 *
*/

#include <wiringPi.h>
#include <wiringPiI2C.h> // add "-lwiringPi" to compile
#include <stdio.h>
#include <iostream>      // add "-lstdc++" to compile
#include <unistd.h>
#include <chrono>

#include "../../../include/Soil_sensor/MCP342X.h"
#include "../../../include/Soil_sensor/MCP342X.cpp"

/*!
 * @brief Instantiate objects used in this project
 */
MCP342X soil_sensor;
using namespace std;
int configData = 0;

int readData();


/*!
 * @brief main progam configures the sensor and calls function to read data from
 * the soil moisture sensor
 */
int main(int argc, char** argv) {
   configData = soil_sensor.configure();
   wiringPiSetup();
   pinMode (6, OUTPUT); // Setup pin 22 (GPIO 6) as output pin
   int counter = 0;

  // decode arguments
    if(argc < 3) {
        printf("You must provide at least two arguments \n First, the number of samples to take,\n then the delay (in sec) between each reading\n \n ");
        exit(0);
    }
    int c = atoi(argv[1]);

    // now we have the correct number of args
    int sleep_delay = atoi(argv[2]) * 1000 ; // convert to millisecs

  for (int i = 1; i < c; ++i)
  {
        // read the data. . .
        uint8_t result = readData();
        usleep(sleep_delay);
    }

}


/*!
 * @brief Function to read data from soil moisture sensor
 */
int readData() {
    uint8_t result;

    auto start = std::chrono::high_resolution_clock::now();

    digitalWrite(6, HIGH); // charging
    soil_sensor.startConversion(configData); // Start conversion
    result = soil_sensor.getResult(&result); // Read converted value
    while(result < 255){
      soil_sensor.startConversion(configData); // Start conversion
      result = soil_sensor.getResult(&result); // Read converted value
    }

    digitalWrite(6, LOW); // charging
    soil_sensor.startConversion(configData); // Start conversion
    result = soil_sensor.getResult(&result); // Read converted value
    while(result > 1){
      soil_sensor.startConversion(configData); // Start conversion
      result = soil_sensor.getResult(&result); // Read converted value
    }

    auto finish = std::chrono::high_resolution_clock::now();

    std::chrono::duration<double> elapsed = finish - start;
    std::cout << "Elapsed time: " << elapsed.count() << " s\n";
    
    return 1;
}
