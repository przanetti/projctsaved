const int led1 = 1;
const int bot1 = 2;

int var1;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(bot1, INPUT);
}

void loop(){

   var1 = digitalRead(bot1);

  if (var1){
    digitalWrite(led1, LOW);

  }else{
    digitalWrite(led1, HIGH);
  }
}
