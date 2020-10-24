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

// continuosly run LED flashing code
void loop() {
  led1();
  led2();
  led3();
}

// Loop for first LED
void led1() {
  digitalWrite(led1Pin, HIGH); // turn LED1 on
  delay(rate1); // wait for rate1
  digitalWrite(led1Pin, LOW); // turn LED1 off
  delay(rate1); // wait for rate1 
}

// Loop for second LED
void led2() {
  digitalWrite(led2Pin, HIGH); // turn LED2 on
  delay(rate2); // wait for rate2
  digitalWrite(led2Pin, LOW);  // turn LED2 off
  delay(rate2); // wait for rate2
}

// Loop for third LED
void loop3() {
  digitalWrite(led3Pin, HIGH); // turn LED3 on
  delay(rate3); // wait for rate 3
  digitalWrite(led3Pin, LOW); // turn LED3 off
  delay(rate3); // wait for rate 3
}
