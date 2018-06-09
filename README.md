#Keil uVision template project for Apollo2 Microcontroller 

This repository contains an easy to use template for developing using the Keil uVision IDE for the Apollo2 microcontroller.

It contains all necessary SDK files to develop which should already be included as part of the project file. The SDK files have been copied across from the AmbiqSuite SDK and contain the relevant libraries and helper functions for development on the Apollo2. It also contains the CMSIS libraries for ARM.

## Hardware

This repository has been tested and should build and compile a Hello World application on the AmbiqMicro Apollo2 EVB V1.1

## Installation

To use it, simply clone the repository and rename the project.

Please ensure you have CMSIS and all Apollo2 packages installed via the Keil PackInstaller (this should come with your Keil installation)

Make sure you have the Segger J-Link drivers installed to view the Serial Wire Output (SWO) for debugging. The Keil debug window may not work, but the J-Link SWO viewer has been tested and is confirmed to work correctly. Please see the AmbiqSuite getting started guide for installation and operation instructions for the J-Link drivers/applications.

Alternatively UART can also be used.

## Issues

Please open an issue if there are any missing SDK files or problems with this repository.
