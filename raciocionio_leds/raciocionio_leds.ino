int leds[] = {7, 8, 9, 10, 11};

void setup() {

  for (int count = 0; count < 5; count++)
  {
    pinMode(leds[count], OUTPUT);
  }

}

void loop() {

  digitalWrite(7, HIGH);
  digitalWrite(11, HIGH);

  delay(2000);

  digitalWrite(7, LOW);
  digitalWrite(11, LOW);

  digitalWrite(8, HIGH);
  digitalWrite(10, HIGH);

  delay(2000);

  digitalWrite(8, LOW);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);

  delay(2000);

  digitalWrite(9, LOW);

}
