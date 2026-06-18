int ledPin=13;
int switchPin=4;
int switchStatus=0;
bool ledStatus=false;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin,INPUT);
  Serial.begin(115200);

}

void loop() {
  switchStatus=digitalRead(switchPin);
  if(switchStatus)
  {
    ledStatus=!ledStatus;
    //Naive Approach
    // if(ledStatus)
    // {
    //   ledStatus=false;
    // }
    // else{
    //   ledStatus=true;
    // }
  }
  digitalWrite(ledPin,ledStatus);
  delay(100);  
}