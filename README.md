# Thor Hammer v1.0

Made by Lukasz Komza at the Bergen County Academies in Hackensack, NJ, USA.

## Software

A simple arduino script for toggling power to the magnet via a reed switch was used. It can be found in this repository under the name "magnet_toggle.ino"

## Hardware
The following hardware was used:

```
Arduino Uno
gShield v5b
24V Power Supply
Carbide 3D Shapeoko (unknown version)
```
The Carbide 3D Shapeoko came with the Arduino Uno with a gShield v5b attatched, but the recommended software (Carbide Create/Carbide Motion) was nonfunctional. GRBL was used as an effective alternative.

### Hardware Guide

The Universal GCode Sender installation guide and download can be found [here](https://winder.github.io/ugs_website/). The version 2.0 nightly build was used. It was used to queue whole GCode files to the Not-a-Farmbot instead of individual commands, which was all that could be done using the serial monitor with GRBLtoArduino.ino

Sungeun K. Jeon's simple_stream.py can be found [here](https://github.com/grbl/grbl/tree/master/doc/script). For this project, simple_stream.py was used, but stream.py can also be implemented. It was also used to queue whole GCode files, but UGS proved to be easier to use.

GRBLtoArduino.ino, along with Sungeun K. Jeon's simple_stream.py, can be found in the software folder in this repository. In order to properly used GRBLtoArduino.ino, you must first install the GRBL Arduino Library, which can be done [here](https://blog.protoneer.co.nz/grbl-arduino-library/). The GRBL library used in Not-a-Farmbot can also be found in the software folder. GRBLtoArduino was used strictly for testing purposes via the serial monitor at 9600 baud.
