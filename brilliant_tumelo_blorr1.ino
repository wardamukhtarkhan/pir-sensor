int led = 2;
int pir = 3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(pir,INPUT);
  Serial.begin(9600);
}

void loop()
{
  int value = digitalRead(pir);
  Serial.println(value);
  delay(100);


if (value == 1)
{
  digitalWrite(led,HIGH);
}
  
else
  {
  digitalWrite(led,LOW);
}
}    
  