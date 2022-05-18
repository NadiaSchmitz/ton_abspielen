int pip = 5;

void setup() {
  pinMode(pip, OUTPUT);
}

void loop() {
  digitalWrite(pip, HIGH);
  delay(100);
  digitalWrite(pip, LOW);
}
