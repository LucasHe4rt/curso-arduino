int count = 7;

void setup() {

  pinMode(count, OUTPUT);

}

void loop() {

  digitalWrite(count, HIGH);
  delay(2000);
  count++;

}
