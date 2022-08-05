/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital ledPin 13, on MKR1000 on ledPin 6. LED_BUILTIN is set to
  the correct LED ledPin independent of which board is used.
  If you want to know what ledPin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int ledPin = 2;
int buttonPin = 3;


// the setup function runs once when you press reset or power the board
void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLUP);
}

// the loop function runs over and over again forever
void loop() {
  bool pushed = isPushed();
  if (pushed) {
    turnOnLed();
  } else {
    turnOffLed();
  }
}

bool isPushed() {
  int input = LOW;
  input = digitalRead(buttonPin);
  if (input == LOW) {
    return true;
  }
  return false;
}

void turnOnLed() {
  digitalWrite(ledPin, HIGH);
}

void turnOffLed() {
  digitalWrite(ledPin, LOW);
}