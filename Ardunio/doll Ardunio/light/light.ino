int sensorPin = A0;   // select the analog input pin for the photoresistor
int threshold = 300;  // analog input trigger level from photoresistor
int sensorValue = 0;  // photoresistor value read from analog input pin

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // built-in LED, usually on pin 13
}

void loop() {
  if (analogRead(sensorPin) < threshold) {
    // low light, so switch the light (LED) on
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    // light level high enough, so switch the light (LED) off
    digitalWrite(LED_BUILTIN, LOW);
  }
  // wait for ADC to settle before next reading
  delay(20);
}
