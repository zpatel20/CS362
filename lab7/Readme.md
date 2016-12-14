
Write a program for the arduino that utilizes interrupts. When no button has been pressed your 16x2 display should say something like "We have been waiting for X seconds", where X will be updated as time goes on.
When the first button is pressed, the display should display “Interrupt received! Press button 2 to continue”
When the user presses button 2 the display goes back to displaying "We have been waiting for X seconds", and restarts the time a 0 seconds.
 
Information about how to tell the system to call your Interrupt Service Routine (ISR) can be found at 
http://arduino.cc/en/Reference/attachInterrupt
Information about timer:
https://www.arduino.cc/en/Reference/Millis
Important note: You must use pin two and three for this.
