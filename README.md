# SmartGreenhouse   [![Build Status](https://travis-ci.org/Team12-UofG/SmartGreenhouse.svg?branch=master)](https://travis-ci.org/Team12-UofG/SmartGreenhouse)

## Overview
The aim of the project is to design and develop a modular smart greenhouse that is capable of detecting and responding to a number of changes in environmental conditions in real time. Sensors are used to measure soil moisture, humidity, temperature, UV light and air quality. The system will also incorporate LED lighting, heating and watering systems with automated and manual control. Moreover, the real-time measurements will be displayed on an online web portal enabling the user to view the real-time and historic growth of the plant.

The **SmartGreenhouse** will enable users to monitor and manage their plant growth environment remotely, making this an ideal system for travelling professionals and students or those who live in unpredictable climates. 

![Alt text](https://github.com/Team12-UofG/SmartGreenhouse/blob/media/SYSTEM.jpg?raw=true) 

## Version 
**SmartGreenhouse 1.1**  
_Reads sensor data, uploads and displays on the SmartGreenhouse webpage._  
_With include file path bug fix._

## File Information
* The drivers for the BME680 environment sensor, VEML6075, and the MCP3426 ADC can be found in the include folder
* The unit tests for the sensors and response sytem are given in the unit test folder
* The example codes can be found in the preliminary test folder 
* The "demo.cpp" file is used to run the entire SmartGreenhouse system

## Requirements
### Hardware 
* Raspberry Pi 3 Model B 
* Vishay VEML6075 UVA & UVB sensor
* Bosch Sensortec BME 680 sensor 
* SmartGreenhouse soil moisture sensor
     * MCP6291T-E/OT Microchip OpAmp
     * MCP3426 ADC
* Decdeal brushless DC motor & 12V power supply plug 
* Water resevoir tank & piping
* LED panels (16 blue LEDs, 40 red LEDs)
* Wire Kinetics stainless steel heat mat
* Response system control circuits
    * STP36NF06L Nchannel MOSFET (x3)
* Raspberry Pi header
* Greenhouse & planter 
* Soil and plant seeds/bulb/sprouts

More information can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Hardware/ "here.")  

### Packages 
Packages can be downloaded to your Raspberry pi using `sudo apt install <package_name>`.
* `apache 2`
* `g++` `gcc`
* `git`
* `javascript-common` 
* `mysql-server` `mysql-client` `php-mysql`
* `php 7.0`

### Software
* Binary files, access from the SmartGreenhouse [release page.](https://github.com/Team12-UofG/SmartGreenhouse/releases "release page.")  

More information can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Software/ "here.")


## Build & Install   
1. Check you have the necessary hardware components and have installed the necessary packages. 
1. Assemble the greenhouse structure.
1. Plant the seeds/bulbs/sprouts in the planter.
1. Position the sensors and response systems and feed the connection cables out of the greenhouse. 
1. Connect the components to the RaspberryPi using the Raspberry Pi header.
1. Download the binary software files from GitHub.
1. Search for and connect the Raspberry Pi and your access device to the hidden wifi network `rank510iot`, password: `raspberry`.
1. Access the SmartGreenhouse webpage.
1. Run the system.  

A more detailed walkthrough can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Build-and-Install-Guides/ "here.")


## Documentation
Documentation for all methods can be found [here.](https://team12-uofg.github.io/SmartGreenhouse/ "here.")  
User Stories and Activity Diagram can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/User-Stories-and-State-Diagram "here.")

## Contributing 
This project is for the assessment of Real Time Embedded Programming 5 at University of Glasgow. Prior to course completion contributions will be welcome however, please draw your attention to our [license.](LICENSE "license.")

## Progress
This project has a complete prototype product and functional software release. 
Details of project progress and evaluation can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Evaluation/ "here.")

## Team Members
[Anton Saikia,](https://github.com/AntonSaikia) 
[Isla Mitchell,](https://github.com/islasummer)
[Jaime Robb](https://github.com/jaimesrobb)  
More information about the team of developers can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Team-of-Developers "here.")
![Alt text](https://github.com/Team12-UofG/SmartGreenhouse/blob/media/MeetTheTeam.png?raw=true) 

## Social Media
Stay up to date with all our project developments using our social media pages, do not forget to 'like' and 'share'.

[Instagram](https://www.instagram.com/uofg_smartgreenhouse/?hl=en "Instagram")

[Twitter](https://twitter.com/UofG_SmartGreen "Twitter")

[Facebook](https://www.facebook.com/SmartGreenhouse-2309795909300843/?modal=admin_todo_tour "Facebook")

[Youtube](https://www.youtube.com/channel/UCLjnLePXFhfWH4YzIdtP1aw "Youtube")

More information can be found [here.](https://github.com/Team12-UofG/SmartGreenhouse/wiki/Publicity-and-Promotion/ "here.")

