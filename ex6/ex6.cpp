const int bot1 = 1;
const int bot2 = 2;
const int bot3 = 3;
const int bot4 = 4; 
const int bot5 = 5;

int var1;
int var2;
int var3;
int var4;
int var5;

void setup()
{
  pinMode(bot1, INPUT);
  pinMode(bot2, INPUT);
  pinMode(bot3, INPUT);
  pinMode(bot4, INPUT);
  pinMode(bot5, INPUT);
  Serial.begin(9000);
}

void loop()
{
  var1 = digitalRead(bot1);
  var2 = digitalRead(bot2);
  var3 = digitalRead(bot3);
  var4 = digitalRead(bot4);
  var5 = digitalRead(bot5);
  
  if (var1){
    Serial.println("bom dia");
  }
  
  if (var2){
    Serial.println("bom dia");
  }
  
  if (var3){
    Serial.println("como você esta?");
  }
  
  if (var4){
    Serial.println("to bem");
  }
  
  if (var5){
    Serial.println("então ta bom");
  }
  delay(10);
}