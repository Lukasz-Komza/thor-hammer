# Thor Hammer v1.0

Made by Lukasz Komza at the Bergen County Academies in Hackensack, NJ, USA.

## Software

A simple arduino script for toggling power to the magnet via a reed switch was used. It can be found in this repository in /software/magnet_toggle.ino.

## CAD

Fusion 360 was used to create a CAD file for the assembly of critical structural components. It was also used to generate .dxf files for the top and bottom plates of the assembly, which were cut out of steel and aluminum respectively on a waterjet at the Bergen County Academies, courtesy of Joseph DeFalco.

## Hardware
The following essential hardware was used:

```
x2 Tenergy NiMH Battery Pack 12V 2000mAh
YaeTek Lifting Electromagnet 176LB/80kg 65mm 12V
Aleph DC-1561 W Magnetic Switch
IRLZ44N HEXFET® Power MOSFET
Arduino Uno
Rubie's Costume Men's Thor Ragnarok Hammer
```

Other hardware, such as threaded standoffs, button-heads, or a black iron pipe will not be listed, as they can be substituted with any functional structural components.

### Hardware Guide

The purchased hammer was cut open and used as a skin for the skeleton and electronics. The structure detaield by the CAD was inserted, and foam padding was added for support. Details on electronics and structure, including wiring diagrams and partial assemblies, can be found in /pictures.

### Electronics Summary

The hammer was powered by two 12V 2000mAh NiMH batteries in parallel. The 12V was regulated to 5V to power the Arduino Uno via a standard circuit soldered onto a proto-board. The code running on the Arudino Uno (magnet_toggle.ino) powered the magnet via the mosfet when the reed switch was closed, and turned it off when the reed switch was open.
