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

//  for (int i = 0; i < 2; i++)
//  { 
//    for (int j = 0; j <= 11; j++)
//    {
//      digitalWrite(IR_PIN, HIGH);
//      delayMicroseconds(6);
//      digitalWrite(IR_PIN, LOW);
//      delayMicroseconds(6);  
//    }
//    digitalWrite(IR_PIN,LOW);
//    delayMicroseconds(450);
//  }
//
//  digitalWrite(sync, LOW);
//  delay(50);
  
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
