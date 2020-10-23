/* LAB 5: LED Flash Code */

// LED pins
const int led1Pin = 13;
const int led2Pin = 12;
const int led3Pin = 11;

// Frequencies of LEDs
const int rate1 = 250;
const int rate2 = 500;
const int rate3 = 50;

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
  loop2();
  loop3();
  digitalWrite(led1Pin, HIGH); // turn the LED on
  delay(rate1); // wait for a second
  digitalWrite(led1Pin, LOW); // turn the LED off
  delay(rate1); // wait for a second
}

// Loop for second LED
void loop2() {
  digitalWrite(led2Pin, HIGH); // turn the LED on
  delay(rate2); // wait for a second
  digitalWrite(led2Pin, LOW);  // turn the LED off
  delay(rate2); // wait for a second
}

void loop3() {
  digitalWrite(led3Pin, HIGH);   // turn the LED on
  delay(rate3);                       // wait for a second
  digitalWrite(led3Pin, LOW);    // turn the LED off
  delay(rate3);
}
