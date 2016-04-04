const uint8_t IR_PIN = 6;

void setup()
{
  pinMode(IR_PIN,OUTPUT);
  Serial.begin(115200);
  delay(1000);
}

void loop()
{
  int halfPeriod = 6;
  int cycles = 600/30.0;
  //int cycles = 1200/30.0;

  unsigned long ln1 = 0;
  unsigned long ln2 = 0;

  //5*1550 ~ 7.75 ms ~ 7ms
  for (int i = 0; i < 5; i++)
  { 
    ln1 = micros();
    for (int j = 0; j <= 23; j++)
    {
      digitalWrite(IR_PIN, HIGH);
      delayMicroseconds(halfPeriod);
      digitalWrite(IR_PIN, LOW);
      delayMicroseconds(halfPeriod);  
    }
    digitalWrite(IR_PIN,LOW);
    delayMicroseconds(900);
  }

  delay(50);
}


/*
void loop()
{
  digitalWrite(sync, HIGH);
  int halfPeriod = 10;
  //int cycles = 600/30.0;
  int cycles = 1200/30.0;

  //5*1550 ~ 7.75 ms ~ 7ms
  for (int i = 0; i < 5; i++)
  { 
    //650 us //* 2
    for (int j = 0; j <= cycles; j++)
    {
      digitalWrite(IR_PIN, HIGH);
      delayMicroseconds(halfPeriod);
      digitalWrite(IR_PIN, LOW);
      delayMicroseconds(halfPeriod-1);  
    }

    //600 us
    digitalWrite(IR_PIN,LOW);
    delayMicroseconds(900);
    //delayMicroseconds(600);
  }

  digitalWrite(sync, LOW);
  delay(75);
}
 */
