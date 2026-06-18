int sensorPin = A0;
int led = 13;
bool is_on = false;
bool sound_detected = false;

void setup() {
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  delay(1000);  // Add 1 second delay for sensor to stabilize
}

void loop() {
  int value = analogRead(sensorPin);

  Serial.print("Value: ");
  Serial.print(value);
  Serial.print(" | LED: ");
  Serial.print(is_on ? "ON" : "OFF");
  Serial.print(" | Detected: ");
  Serial.println(sound_detected ? "YES" : "NO");

  // Trigger on clap
  if (value > 372 && !sound_detected) {
    is_on = !is_on;
    digitalWrite(led, is_on ? HIGH : LOW);
    Serial.println("Clap detected → Toggled LED");
    sound_detected = true;
    delay(300);  // Debounce
  }

  // Reset once value falls below ambient
  if (value < 368 && sound_detected) {
    Serial.println("Noise ended → Ready for next clap");
    sound_detected = false;
  }

  delay(10);  // Recommended sampling delay
}
