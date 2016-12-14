//Zalak Patel 
//Cs 362 lab 6 

#include <LiquidCrystal.h>
#include <Time.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int inSecond = 0;
int inMinute = 0;
int inHour = 0;
int inMonth = 0; 
int inDate = 0; 
int inYear= 0; 

void setup(){

  Serial.begin(9600);
  lcd.begin(16, 2);
 
  //HOUR INPUT 
  //ask user to input hour 
  Serial.println("Enter the hour.");
  while(Serial.available() == 0){}
  inHour = Serial.parseInt();  
  Serial.print("Hours received: ");
  Serial.println(inHour);
  // error checking 
  if(inHour > 23){
    Serial.println("Hour value is invalid please enter a value from 0 to 23");
     Serial.println("Enter the hour.");
     while(Serial.available() == 0){}
     inHour = Serial.parseInt();  
     Serial.print("Hours I received: ");
     Serial.println(inHour);
  }
   if(inHour < 0){
    inHour = 0; 
    Serial.println("Hour value is invalid please enter a value from 0 to 23");
     Serial.println("Enter the hour.");
     while(Serial.available() == 0){}
     inHour = Serial.parseInt();  
     Serial.print("Hours I received: ");
     Serial.println(inHour);
  }

  //MINUTE INPUT
  Serial.println("Enter the minute.");
  while(Serial.available() == 0){}
  inMinute = Serial.parseInt();  
  Serial.print("Minutes received: ");
  Serial.println(inMinute);
  // error checking 
  if(inMinute > 59){
    inMinute = 0; 
  Serial.println("Minute value is invalid please enter a value from 0 to 59!");
  Serial.println("Enter the minute.");
  while(Serial.available() == 0){}
  inMinute = Serial.parseInt();  
  Serial.print("Minutes received: ");
  Serial.println(inMinute);
  }
   if(inMinute < 0){
  Serial.println("Minute value is invalid please enter a value from 0 to 59!");
  Serial.println("Enter the minute.");
  while(Serial.available() == 0){}
  inMinute = Serial.parseInt();  
  Serial.print("Minutes received: ");
  Serial.println(inMinute);
  }

  //Second INPUT 
  //ask user to input hour 
  Serial.println("Enter the Seconds.");
  while(Serial.available() == 0){}
  inSecond = Serial.parseInt();  
  Serial.print("Second received: ");
  Serial.println(inSecond);
  // error checking 
  if(inSecond > 59){
    Serial.println("Second value is invalid please enter a value from 0 to 59");
     Serial.println("Enter the Second.");
     while(Serial.available() == 0){}
     inSecond = Serial.parseInt();  
     Serial.print("Second I received: ");
     Serial.println(inSecond);
  }
   if(inSecond < 0){
    inSecond = 0; 
    Serial.println("Second value is invalid please enter a value from 0 to 59");
     Serial.println("Enter the Second.");
     while(Serial.available() == 0){}
     inSecond = Serial.parseInt();  
     Serial.print("Hours I received: ");
     Serial.println(inSecond);
  }

  //MONTH INPUT 
  Serial.println("Enter the month.");
  while(Serial.available() == 0){}
  inMonth = Serial.parseInt();  
  Serial.print("Month received: ");
  Serial.println(inMonth);
  // error checking 
  if(inMonth > 12){
  Serial.println("Month value is invalid please enter a value from 1 to 12!");
  Serial.println("Enter the Month.");
  while(Serial.available() == 0){}
  inMonth = Serial.parseInt();  
  Serial.print("Month received: ");
  Serial.println(inMonth);
  }
   if(inMonth <= 0){
  Serial.println("Month value is invalid please enter a value from 0 to 12!");
  Serial.println("Enter the month.");
  while(Serial.available() == 0){}
  inMonth = Serial.parseInt();  
  Serial.print("Month received: ");
  Serial.println(inMonth);
  }


  //DATE INPUT
  Serial.println("Enter the Date.");
  while(Serial.available() == 0){}
  inDate = Serial.parseInt();  
  Serial.print("Date received: ");
  Serial.println(inDate);
  // error checking 
  if(inDate > 31){
  Serial.println("Date value is invalid please enter a value from 1 to 31!");
  Serial.println("Enter the Date.");
  while(Serial.available() == 0){}
  inDate = Serial.parseInt();  
  Serial.print("Date received: ");
  Serial.println(inDate);
  }
   if(inDate <= 0){
  Serial.println("Date value is invalid please enter a value from 1 to 31!");
  Serial.println("Date the Date.");
  while(Serial.available() == 0){}
  inDate = Serial.parseInt();  
  Serial.print("Date received: ");
  Serial.println(inDate);
  }

 //DATE ERROR CHECKING 
  if ( inDate = 31) 
  { 
    inMonth != (1 || 3 || 5 || 7 || 8 || 9 || 12);
    if (inDate = 31) 
    Serial.println("Date value is invalid please enter a value less than 31 but greater than 0");
    Serial.println("Enter the Date.");
    while(Serial.available() == 0){}
    inDate = Serial.parseInt();  
    Serial.print("Date received: ");
    Serial.println(inDate);
    
  }

  //DATE ERROR CHECKING 
  if ( inDate < 29) 
  { 
    inMonth != (2);
    if (inDate <29) 
    Serial.println("You entered Feburary as Month, you cannot have more than 29 days, enter value between 1 and 29");
    Serial.println("Enter the Date.");
    while(Serial.available() == 0){}
    inDate = Serial.parseInt();  
    Serial.print("Date received: ");
    Serial.println(inDate);
    
  }
  
  //YEAR INPUT
  Serial.println("Enter the year.");
  while(Serial.available() == 0){}
  inYear = Serial.parseInt();  
  Serial.print("year received: ");
  Serial.println(inYear);
  // error checking 
   if(inYear <= 0){
  Serial.println("Year value is invalid please enter a value more than 0");
  Serial.println("Enter the Year.");
  while(Serial.available() == 0){}
  inYear = Serial.parseInt();  
  Serial.print("Year received: ");
  Serial.println(inYear);
  }
}

void loop(){   

  // To print the time
  lcd.setCursor(1,0);
  // Print the hour
  if(inHour < 10){
    lcd.print('0');
    lcd.print(inHour);
  }
  else{
    lcd.print(inHour);
  }
  // Print the minute
  lcd.print(":");
  
  if(inMinute < 10){
    lcd.print('0');
    lcd.print(inMinute);
  }
  else
  {
    lcd.print(inMinute);
  }
  // Print the seconds
  lcd.print(":"); 
  
  if(inSecond < 10){
    lcd.print('0');
    lcd.print(inSecond);
  }
  else
  {
    lcd.print(inSecond);
  }

  //TO PRINT DATE
  lcd.setCursor(1,2);
  
  // Print the Month
  if(inMonth < 10){
    lcd.print('0');
    lcd.print(inMonth);
  }
  else
    lcd.print(inMonth);
  // Print the date
  lcd.print(":");
  if(inDate < 10){
    lcd.print('0');
    lcd.print(inDate);
  }
  else
  {
    lcd.print(inDate);
  // Print the year
  }
  lcd.print(":"); 
    lcd.print(inYear);
  
 
  // Increment some values as time goes on
  if(inSecond == 60){
    inMinute++;
    inSecond = 0;
  }
  if(inMinute == 60){
    inHour++;
    inMinute = 0;
  }
  
  // Reset hours once it reaches 24
  if(inHour == 24){
    inHour = 0;
  }
  
  inSecond++;  //increment seconds
  delay(1000);  //indicates tick speed

}//end loop
