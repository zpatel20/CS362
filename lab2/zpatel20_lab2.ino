// Zalak Patel 
// zpatel20
// CS361

//buttons, locations
const int buttonPinOn=2;
const int buttonPinOff=5;

//ledpins
const int ledPin =  13;      // the number of the LED pin
const int ledPin1 =  12;      // the number of the LED pin
const int ledPin2 =  11;      // the number of the LED pin
//count set to 0
int count=0;


// variables will change:
//int buttonState = 0;         // variable for reading the pushbutton status
 int buttonPressedOn=LOW;
  int buttonPressedOff=LOW;

void setup() {
  // initialize the LED pin as an output:
  //int count=0;
  pinMode(ledPin, OUTPUT);     
  pinMode(ledPin1, OUTPUT); 
  pinMode(ledPin2, OUTPUT); 

  pinMode(buttonPinOn, INPUT);
  pinMode(buttonPinOff, INPUT);
    //pinMode(buttonPinOff, INPUT_PULLUP);

   
}

void loop(){
  int buttonOnState, buttonOffState;
  int ledState, ledState1, ledState2;
  
  ledState = digitalRead(ledPin);
  ledState1 = digitalRead(ledPin1);
  ledState2 = digitalRead(ledPin2);
  
  buttonOnState = digitalRead(buttonPinOn);
  buttonOffState = digitalRead(buttonPinOff);

  
  Serial.println(count);
  if(buttonOnState != buttonPressedOn || buttonOffState !=buttonPressedOff){
    if(buttonOnState==HIGH) 
    {
      count++;
      Serial.print(count);
    }
    if(buttonOffState==HIGH)
    {
      count--;
      Serial.print(count); 
    }

  if(count==1){
      Serial.println(count);
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==2){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==3){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
  }

   else if(count==4){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==5){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==6){
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==7){
    digitalWrite(ledPin, HIGH);
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, HIGH);
  }

   else if(count==0){ //when count = 0
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, LOW);
  }
  else if(count < 0 || count > 7){
    count=0;
  }
   delay(50); 
  
    }
  buttonPressedOn=buttonOnState;
  buttonPressedOff=buttonOffState;
  
 
}
 

