// Zalak Patel 
// Lab 3 - Name and Quote scrolling 
// include the library
#include <LiquidCrystal.h>

// init the lcd display according to the circuit
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// indicate LCD size (16x2)
int screenWidth = 16;
int screenHeight = 2;

// two lines to display on screen
// line1 = scrolling, for the quote
String line1 = "The most courageous act is still to think for yourself. - Coco Chanel";
// line2 = static, for the name
String line2 = "Zalak Patel";

// some flags for the string and scrolling
int stringStart, stringStop = 0;
int scrollCursor = screenWidth;

void setup() {
  
  lcd.begin(screenWidth,screenHeight);
  
}//end setup

void loop() {
  
  lcd.setCursor(scrollCursor, 0);
  lcd.print(line2);
  lcd.setCursor(0, 1);
  lcd.print(line1.substring(stringStart,stringStop));
  delay(300);
  lcd.clear();
  
  if(stringStart == 0 && scrollCursor > 0){
    
    scrollCursor--;
    stringStop++;
    
  }//end if
  else if (stringStart == stringStop){
    
    stringStart = stringStop = 0;
    scrollCursor = screenWidth;
    
  }//end else if 
  else if (stringStop == line1.length() && scrollCursor == 0) {
    
    stringStart++;
    
  }//end else if 
  else {
    
    stringStart++;
    stringStop++;
  }//end else
  
}//end loop

