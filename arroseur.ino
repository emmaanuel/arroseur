
#define sensorPinD 3
#define vccPin 1
#define moteurPin 2
#define ledPin 4

int digitalValue = 0;


void setup() {
  pinMode(sensorPinD, INPUT);
  pinMode(vccPin, OUTPUT);
  pinMode(moteurPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(vccPin, LOW);
  digitalWrite(moteurPin, LOW);
  digitalWrite(ledPin, LOW);
}

void loop() {
  delay(60000);
  digitalWrite(vccPin, HIGH);
  delay(1000);
  digitalValue = analogRead(sensorPinD);
  digitalWrite(vccPin, LOW);
  if (digitalValue > 600) {
    digitalWrite(ledPin, HIGH);
    digitalWrite(moteurPin, HIGH);
    delay(20000);
    digitalWrite(ledPin, LOW);
    digitalWrite(moteurPin, LOW);
  }
  delay(60000*4);



}
