void setup()
{
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  digitalWrite(1, HIGH);
  digitalWrite(1, LOW);
  digitalWrite(2, HIGH);
  digitalWrite(2, LOW);
}