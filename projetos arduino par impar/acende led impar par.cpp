int led1=2;
int led2=3;
int led3=4;
int led4=5;
int led5=6;
int botao1=8;
int botao2=9;
int botao3=10;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(botao1, INPUT);
  pinMode(botao2, INPUT);
  pinMode(botao3, INPUT);
}

void loop(){
  
  if(digitalRead(botao1)== HIGH){
    acendeimpar();
  }
  if(digitalRead(botao2)== HIGH){
    acendepar();
  }
  if(digitalRead(botao3)== HIGH){
    apagartudo();

} 
}
void acendeimpar(){
 digitalWrite(led1, HIGH);
 digitalWrite(led3, HIGH);
 digitalWrite(led5, HIGH);
}
  void acendepar(){
 digitalWrite(led2, HIGH);
 digitalWrite(led4, HIGH);
}

void apagartudo(){
  digitalWrite(led1, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  digitalWrite(led4, LOW);
}