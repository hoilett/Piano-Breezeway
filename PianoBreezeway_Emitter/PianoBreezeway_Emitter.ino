const uint8_t IR_PIN = 6;
const uint8_t sync = 8;

void setup()
{
  pinMode(IR_PIN,OUTPUT);
  pinMode(sync,OUTPUT);
  Serial.begin(115200);
  delay(1000);
}

void loop()
{
  digitalWrite(sync, HIGH);
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j <= 23; j++)
    {
      digitalWrite(IR_PIN, HIGH);
      delayMicroseconds(6);
      digitalWrite(IR_PIN, LOW);
      delayMicroseconds(6);
    }
    digitalWrite(IR_PIN,LOW);
    digitalWrite(sync, LOW);

    
    delayMicroseconds(900);
  }

  delay(80);
}
