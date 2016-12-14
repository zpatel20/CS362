//Zalak Patel
// Cs362 lab 7

#include <LiquidCrystal.h>

//for LCD wiring
LiquidCrystal lcd(12, 11, 7, 6, 5, 4);

//button initialization
const int buttonPin = 3;
const int buttonPin2 = 2; 

//reading if the buttom in pressed 
int previousReading = LOW;
int previousReading2 = LOW;

//time integer
unsigned long time;

void setup() 
{
  lcd.begin(16, 2);
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin2, INPUT); 
}

void loop() 
{
  int reading = digitalRead(buttonPin);
  int reading2 = digitalRead(buttonPin2);

 
    //set time to the amount of seconds since program started
    time = millis()/1000;
      //when program is started and no button is pressed seconds printed
      if (previousReading == LOW) 
      {
            lcd.setCursor(2,0);
            lcd.println("been waiting"); 
            //prints time since program started
            lcd.setCursor(2,1);
            lcd.print(time);
            lcd.println(" seconds.");
   
      }
      
      //when button 1 is pressed instruction to press 2 second button
      if (previousReading == LOW && reading == HIGH)
      { 
        do{
          lcd.setCursor(2,0);
        lcd.println("Interrupt received! ");
        lcd.setCursor(2,1);
        lcd.println("Press button 2 to continue");
        } while (reading == LOW);
      }

      //when button 2 is pressed instruction to restart
      if (previousReading2 == LOW && reading2 == HIGH) 
      {
        lcd.setCursor(3,0);
        lcd.println("We have been waiting for "); 
        //prints time since program started
        lcd.setCursor(3,1);
        lcd.print(time);
        lcd.println(" seconds."); 
        delay(1000);
      } 
    //previousReading = reading;  
 // } while(reading2 == HIGH);

}

