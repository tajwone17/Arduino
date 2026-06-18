int ledPin = 12;
int switchPin = 4;
int switchStatus = 0;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {
  switchStatus = digitalRead(switchPin);
  if (switchStatus == 1) { 
    digitalWrite(ledPin, HIGH);
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);
    delay(100);
  }
}