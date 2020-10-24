/* Lab Part D */
const int buttonPin = 2;
const int ledPin = 13;
bool buttonWasPressed = false;

void setup() {
   pinMode(ledPin,OUTPUT);
   pinMode(buttonPin,INPUT);
   Serial.begin(9600);
} 

void loop() {
    int buttonState = digitalRead(buttonPin);
    Serial.println(buttonState);

    // LED 
    digitalWrite(ledPin, HIGH); // Turn LED on
    delay(100); // Have on for 100 ms
    digitalWrite(ledPin, LOW); // Turn LED off
    
    // Button Press
    if(buttonState){
      digitalWrite(ledPin, HIGH); // Turn LED on
      delay(2000); // Have on for 2 s
      buttonWasPressed = true; // Toggle bool
    }
    else if ((buttonWasPressed == true) && (!buttonState)) {
      digitalWrite(ledPin, LOW); // Turn LED off
      buttonWasPressed = false; // Toggle bool
    }
} 
