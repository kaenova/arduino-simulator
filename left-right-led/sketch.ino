

// Wokwi pin trigger
int leftTriggerPin = 3;
int rightTriggerPin = 2;

// Wokwi pin LED
int leftLedPin = 8;
int rightLedPin = 7;


// the setup function runs once when you press reset or power the board
void setup() {
  setupTrigger();
  setupLED();
}

void setupTrigger() {
  pinMode(leftTriggerPin, INPUT_PULLUP);
  pinMode(rightTriggerPin, INPUT_PULLUP);
}

void setupLED() {
  pinMode(leftLedPin, OUTPUT);
  pinMode(rightLedPin, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  int state = 0;
  state = getTriggerState();
  if (state == 0) {
    turnOnLeftLED();
  } else {
    turnOnRightLED();
  }
}

int getTriggerState() {
  // Return 0 (left) and 1 (right)
  if (digitalRead(leftTriggerPin) == LOW) {
    return 0;
  }
  return 1;
}

void turnOnRightLED() {
  digitalWrite(rightLedPin, HIGH);
  digitalWrite(leftLedPin, LOW);
}

void turnOnLeftLED() {
  digitalWrite(rightLedPin, LOW);
  digitalWrite(leftLedPin, HIGH);
}