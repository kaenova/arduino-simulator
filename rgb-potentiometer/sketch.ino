// Pin
// LED
int rPin = 13;
int gPin = 12;
int bPin = 11;
// Potentiometer
int potentiometerPin = A0;


void setup() {
  Serial.begin(115200);
  setupRGB();
  setupPotentiometer();
}

void setupPotentiometer() {
  pinMode(potentiometerPin, INPUT);
}

void setupRGB() {
  pinMode(rPin, OUTPUT);
  pinMode(gPin, OUTPUT);
  pinMode(bPin, OUTPUT);
}

void loop() {
  int value = rgbDecider();
  ledHighLow(value);
  delay(10);
}

void ledHighLow(int state) {
  digitalWrite(rPin, LOW);
  digitalWrite(gPin, LOW);
  digitalWrite(bPin, LOW);
  if (state == 0) {
    digitalWrite(rPin, HIGH);
  } else if (state == 1) {
    digitalWrite(gPin, HIGH);
  } else {
    digitalWrite(bPin, HIGH);
  }
}

int rgbDecider() {
  int value = analogRead(potentiometerPin);
  
  if (value < 341) {
    return 0;
  } else if (value < 614) {
    return 1;
  } else {
    return 2;
  }
} 
