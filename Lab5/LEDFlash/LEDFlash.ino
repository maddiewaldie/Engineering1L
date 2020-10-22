/* LAB 5: LED Flash Code */

const int led1Pin = 13;
const int led2Pin = 12;
const int led3Pin = 11;

const int rate1 = 250;
const int rate2 = 500;
const int rate3 = 100;

void setup() {
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
}

void loop() {
  digitalWrite(led1Pin, HIGH);   // turn the LED on
  delay(rate1);                       // wait for a second
  digitalWrite(led1Pin, LOW);    // turn the LED off
  delay(rate1);                       // wait for a second

  digitalWrite(led2Pin, HIGH);   // turn the LED on
  delay(rate2);                       // wait for a second
  digitalWrite(led2Pin, LOW);    // turn the LED off
  delay(rate2);                       // wait for a second

  digitalWrite(led3Pin, HIGH);   // turn the LED on
  delay(rate3);                       // wait for a second
  digitalWrite(led3Pin, LOW);    // turn the LED off
  delay(rate3);                       // wait for a second
}
