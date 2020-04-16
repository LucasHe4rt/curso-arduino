void setup()
{

  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);

}

void loop()
{

  int stateBtn = digitalRead(7);
  int interval = 500;

  if (stateBtn == HIGH)
  {

    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);
    delay(interval);

    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    delay(interval);

    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
    delay(interval);

  } else {

    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
    digitalWrite(8, LOW);

  }



}
