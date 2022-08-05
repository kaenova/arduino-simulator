int ledPin = 2;


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  turnOnLed();
  delay(1000);
  turnOffLed();
  delay(1000);
}

void turnOnLed() {
  digitalWrite(ledPin, HIGH);
}

void turnOffLed() {
  digitalWrite(ledPin, LOW);
}