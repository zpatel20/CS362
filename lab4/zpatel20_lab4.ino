//zalak Patel
//zpatel20
//lab 4

#include <LiquidCrystal.h>

LiquidCrystal lcd (12,11,7,6,4,3);

int scrollCursor = 16;
int pCellReading;
int pCellPin = 0;

//debuggin LED placement
int ledPin = 5;

//control the photo resistor brightness
String brightness;

void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  pinMode(ledPin, OUTPUT);
}

void loop() {


  pCellReading = analogRead (pCellPin); 
  Serial.println(pCellReading); 
  
  // find the range and brigthness according to code
  if (pCellReading < 10) {
    brightness = "Very Dark";
  }
  else if (pCellReading < 200) {
    brightness = "Parially Dark";
  }
  else if (pCellReading < 500) {
    brightness = "Medium";
  }
  else if (pCellReading < 800) {
    brightness = "Almost Lit";
  }
  else if (pCellReading > 800) {
    brightness = "Completely Lit";
  }
  else {
    brightness = "The Value cannot be determined";
  }
  
  // display the first row of LCD display
  lcd.setCursor(0,0);
  lcd.print("Value is: ");
  lcd.print(pCellReading);
  
  // display the second row of LCD display
  lcd.setCursor(0, 1);
  lcd.print(brightness); 
  delay(100);  

  //clear screen
  lcd.clear();  
  
}
