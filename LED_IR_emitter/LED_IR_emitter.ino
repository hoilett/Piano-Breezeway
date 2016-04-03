const uint8_t IR_PIN = 6;
const uint8_t sync = 8;

void setup()
{
  pinMode(IR_PIN,OUTPUT);
  pinMode(sync, OUTPUT);
  digitalWrite(sync, LOW);
  delay(3000);
}

void loop()
{
  digitalWrite(sync, HIGH);
  int halfPeriod = 10;
  int cycles = 600/30.0;

  for (int i = 0; i < 5; i++)
  {  
    for (int j = 0; j <= cycles; j++)
    {
      digitalWrite(IR_PIN, HIGH);
      delayMicroseconds(halfPeriod);
      digitalWrite(IR_PIN, LOW);
      delayMicroseconds(halfPeriod-1);  
    }
  
    digitalWrite(IR_PIN,LOW);
    delayMicroseconds(900);
  }

  digitalWrite(sync, LOW);
  delay(25);
}
