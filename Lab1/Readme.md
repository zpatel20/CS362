Learning Goals:

Get familiar with the Arduino programming environment.
Learn how to build a circuit to connect external components to the Arduino.
Learn how to program the Arduino to control external components.
Bonus: Pretty blinking lights.
As working with microcontrollers and electronics is new to most of you, don't worry if some of this seems weird or confusing.  Please attend the lab during your scheduled lab time, or any of the office hours, in order to get help setting everything up.

Prelab:

Get a blinking LED on Pin 13.  (Note: Pin 13 controls both the onboard LED, and the external pin 13.  If you do this correctly, your onboard and external LED should blink at the same time.)

You will first need to get the Arduino IDE set up.  You can download it here for free. There are plenty of tutorials for setting up Arduinos on the Arduino website.

You can follow one of the many online tutorials on how to do this, such as: http://arduino.cc/en/Tutorial/Blink.

Notes:

A good way to approach this is to get your onboard LED blinking first, and then connect an external LED.
The Arduino IDE comes with sample code to get your LED blinking.  
Lab:

Use the onboard LED on pin 13, a red led on a second digital pin of your choice and a green led on a third digital pin of your choice. 
Have these cycle so only one LED is on at any given point in time.

The digital pins should be labeled 0-13 on your board.

Each off-board LED should be connected to a 220 Ohm resistor.

Note that this will mean you have two connect two separate LEDs to the ground pin.  I recommend using a breadboard for this.

Due by Friday of week 4 (9/16).  Have a TA check out your board by the end of lab, and submit the code via blackboard by 5pm.
