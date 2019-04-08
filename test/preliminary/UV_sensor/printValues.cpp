/**************************************************************************/
/*!
 *  @file printValues.cpp
 *  @author Isla Mitchell
 *  @brief Prints output sensor readings.
 *  @version 0.1
 *  @date 2019-04-07
 *  @copyright Copyright (c) 2019
 *
*/

#include "../include/VEML6075.h"
#include "../include/VEML6075.cpp"

/*!
 * @brief UV sensor object.
 */
UV_sensor lightSensor; // create UV sensor object

/*!
 * @brief Main function for UV sensor test.
 */
int main (){

  printf("VEML6075 Simple Test \n");
  lightSensor.uvConfigure(); // configure sensor

  float UVA_calc = lightSensor.readUVA(); // additional
  float UVB_calc = lightSensor.readUVB(); // additional
  float UV_calc = lightSensor.readUVI(); // UV value - this is the output we want
  printf("UVA Index reading: %f \n", UVA_calc);
  printf("UVB Index reading: %f \n", UVB_calc);
  printf("UV Index reading: %f \n", UV_calc);
}
