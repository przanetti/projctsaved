const int botao=3;
const int led=2;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(botao, INPUT);
}

void loop()
{

  if(digitalRead(botao)== HIGH){
    
    digitalWrite(led, HIGH);
  }else{
  digitalWrite(led, LOW);
  }
}