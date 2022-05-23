int pip = 5;
int led_red = 4;

void setup() {
  pinMode(pip, OUTPUT);
  pinMode(led_red, OUTPUT);
}

void loop() {
  digitalWrite(pip, HIGH);
  digitalWrite(led_red, HIGH);
  delay(500);
  digitalWrite(pip, LOW);
  digitalWrite(led_red, LOW);
  delay(500);
}
