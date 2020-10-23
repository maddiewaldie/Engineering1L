/* LAB 5: LED Flash Code pt 2 */

// Variables
const int led1Pin = 3;
const int freq = 1000;
const int delay1 = 5000;
const int delay2 = 3000;

void setup() {
  pinMode(led1Pin, OUTPUT);
}

void loop() {
  digitalWrite(led1Pin, HIGH); // turn the LED on
  delay(delay1); // wait for a second
  digitalWrite(led1Pin, LOW); // turn the LED off
  delay(delay2); // wait for a second
  for(int i = 0; i < 10; i++) {
    digitalWrite(led1Pin, HIGH); // turn the LED on
    digitalWrite(led1Pin, LOW); // turn the LED off
    delay(freq); // wait for a second
  }
}
