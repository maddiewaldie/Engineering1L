const int buttonPin = 2;
const int ledPin = 13;
bool buttonWasPressed = 0;

void setup() {
   pinMode(ledPin,OUTPUT);
   pinMode(buttonPin,INPUT);
   Serial.begin(9600);
} 

void loop() {
   int buttonState = digitalRead(buttonPin);
   Serial.println(buttonState);

// Part A
if(buttonState){
    int i;
    for(i=0;i<10;++i){
      digitalWrite(13,HIGH);
      delay(250);
      digitalWrite(13,LOW);
      delay(250);
    }
}
else {
  digitalWrite(ledPin,LOW);
  buttonWasPressed = false;
}

// Part B
if(buttonState){
    int i;
    for(i=0;i<10;++i){
      digitalWrite(13,HIGH);
      delay(250);
      digitalWrite(13,LOW);
      delay(250);
    }
}
else {
  digitalWrite(ledPin,LOW);
  buttonWasPressed = false;
}
} 
