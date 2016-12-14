//ZALAK PATEL
//ZPATEL20
//LAB5 CS 362 



const int ledPin=6; //the code will turn on the LED connected to pin 6
const int ledPin2 = 9; //the code will turn on the LED connected to pin 9
const int ledPin3 = 10; //the code will turn on the LED connected to pin 10
const int ledPin4 = 11; //the code will turn on the LED connected to pin 11
const int sensorPin= 0; //Sensor pin connects to analog pin A0
int speaker = 5; //speaker placed at pin 5
int level; //the variable that will hold the light level reading
const int threshold1 = 10; //this represents the threshold voltage. If voltage is below 10, this triggers the LED to turn on
const int threshold2 = 20; //this represents the threshold voltage. If voltage is below 20, this triggers the LED to turn on
const int threshold3 = 30; //this represents the threshold voltage. If voltage is below 30, this triggers the LED to turn on 
const int threshold4 = 40; //this represents the threshold voltage. If voltage is below 40, this triggers the LED to turn on
const int threshold5 = 60; //this represents the threshold voltage. If voltage is over 60 then no LED turns on 

const int potMeter = A1; 


void setup() {
pinMode (ledPin, OUTPUT); //sets digital pin 6 as output
pinMode (ledPin2, OUTPUT); //sets digital pin 9 as output
pinMode (ledPin3, OUTPUT); //sets digital pin 10 as output
pinMode (ledPin4, OUTPUT); //sets digital pin 11 as output
pinMode (speaker, OUTPUT); //sets buzzers as output
Serial.begin(9600); //sets the baud rate at 9600 so we can check the values the sensor is obtaining on the Serial Monitor
pinMode(potMeter, OUTPUT);
pinMode(5, OUTPUT);
}

void loop(){
level= analogRead(sensorPin); //the sensor takes readings from analog pin A0
Serial.println(analogRead(sensorPin));

if (level < threshold1){
//if the light level is below the threshold level, then 4 LED turns on
digitalWrite(ledPin, HIGH); 
digitalWrite(ledPin2, HIGH); 
digitalWrite(ledPin3, HIGH); 
digitalWrite(ledPin4, HIGH); 
}
if (level < threshold2){
//if the light level is below the threshold level, then 3 LED turns on
digitalWrite(ledPin, HIGH); 
digitalWrite(ledPin2, HIGH); 
digitalWrite(ledPin3, HIGH); 
}
if (level < threshold3){
//if the light level is below the threshold level, then 2 LED turns on
digitalWrite(ledPin, HIGH); 
digitalWrite(ledPin2, HIGH); 
}

if (level < threshold4){
//if the light level is below the threshold level, then 1 LED turns on
digitalWrite(ledPin, HIGH); 
}

if (level < threshold5){
//if the light level is below the threshold level, then 0 LED turns on
digitalWrite(ledPin, LOW); 
digitalWrite(ledPin2, LOW); 
digitalWrite(ledPin3, LOW); 
digitalWrite(ledPin4, LOW); 
}

//code to control the buzzer through potentiometer 
    int val = 0; 
    val = analogRead(potMeter); 
    val = map(val, 0, 1023,0,255); 
    analogWrite(5,val);  
    


}
