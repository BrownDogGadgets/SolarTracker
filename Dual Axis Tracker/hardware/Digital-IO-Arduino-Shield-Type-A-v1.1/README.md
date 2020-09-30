# Digital IO Arduino Shield Type A v1.1

![](digital-io-shield.jpg)

The [Digital IO Shield](hardware/Digital-IO-Arduino-Shield-Type-A-v1.1) is a general purpose Arduino shield and replaces the old version of the Solar Tracker Shield. If you are using the this version of the Solar Tracker Shield you will need to use the Arduino sketch `Dual_Axis_Tracker_V3.ino`

Make the following connections between the LDR Board and the Shield.

|LDR Board|Shield|
|---|---|
|TR|A0|
|TL|A1|
|BR|A2|
|BL|A3|

Make the following connections between the two servos and the Shield.

|Servo|Shield|
|---|---|
|Horizontal Servo|D5|
|Vertical Servo|D6|

Power the Arduino, either with a USB cable or using the barrel jack.

Power the Shield with an external 3 AA battery pack connected to the screw terminals on the Shield. This provides power to the servos so the tracker can move.




