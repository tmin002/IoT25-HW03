const int ledPin = 13;     
const int potPin = 32;    

void setup() {
  Serial.begin(9600);
}

void loop() {
  int potValue = analogRead(potPin);
  Serial.println(potValue);
  analogWrite(ledPin, map(potValue, 0, 4096, 0, 255));
}
