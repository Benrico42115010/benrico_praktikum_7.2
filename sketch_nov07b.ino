const int switchPin = 2;
const int motoraPin = 9;
int switchState = 0;
void setup() {

   pinMode(motorPin, OUTPUT);
   pinMode(switchPin, INPUT);
}
void loop() {
  switchState = digitalRead(switchPin);
  if (switchState == HIGH) {
    digitalWrite(motoraPin, HIGH);
  }
  else {
    digitalWrite(motorPin, LOW);
  }
}

