/*
 * Name:   Milin Panchal (mpanch3)
 *         Zalak Patel   (zpatel20)
 * Course: CS 362
 * Lab 8:  Arduino to Arduino Communication
 * 
 */

// Constant Variable Declarations
const int button = 8;
const int led = 13;

// Variable Declarations
int currentButtonStatus = 0;
int prevButtonStatus = 0;
int flag = 0;

// Setup
void setup() 
{
  Serial.begin(9600);
  pinMode(button, INPUT);
  pinMode(led, OUTPUT);
}

// Loop
void loop() {
  // Reading from digital pin.
  currentButtonStatus = digitalRead(button);

  // If it's high...
  if(currentButtonStatus == HIGH)
  {  
    if(prevButtonStatus != currentButtonStatus)
    {
      Serial.write(1);
      currentButtonStatus = LOW;
    }
  }
  prevButtonStatus = currentButtonStatus;

  // Serial read check...
  if(Serial.available() > 0)
  {
    int reading = Serial.read();
    if(reading)  // If reading or Serial.read() is true or receiving
    {
      flag = ~flag;
      digitalWrite(led, flag);
    }   
  }
  
}
// Program finished.
