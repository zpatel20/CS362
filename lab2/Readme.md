Learning Goals:

Learn how to create a circuit that sends input from a connected component to the Arduino.
Get practice with slightly more complicated Arduino programming.
Prelab:

Interface a push button switch and LED to the Arduino.
When the push button is pressed the Arduino should read in the value from the switch, and then toggle the LED.
(if the LED is on, it goes off; if the LED is off it goes on).

A very simple pushbutton example is here: https://www.arduino.cc/en/Tutorial/Button

A helpful resource is arduino lesson 5: http://www.ladyada.net/learn/arduino/lesson5.html

Using the serial monitor to read print statements from your Arduino can be very helpful here.


Lab:

Use two switches and three LEDs for this circuit. One switch will increment a 3-bit count, and the other switch should decrement the 3-bit count. 
The 3-bit count will be displayed on the three LEDs in binary (a 1 is LED on).


Your lights should increment (or decrement) by one each time the switch is pressed. If we continually depress the switch, the lights should not run up (or down) to 7 (or 0) (i.e. it should only change the value once per button press).

Also document what happens when you reach 7 and/or 0.

Lab needs to be checked out, and the code submitted to blackboard, before 5pm on 9/23
