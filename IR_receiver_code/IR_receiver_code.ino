//define pins. I used pins 4 and 5

#define irSensorPin 5       // IR sensor on this pin
int val;
const uint8_t sync = 8;

uint8_t samples[100] = {0};

void setup()
{
  pinMode(irSensorPin, INPUT);
  pinMode(sync, INPUT);
  Serial.begin(115200); 
  Serial.println("Program Starting"); 
  delay(100);
}



void loop()
{
  uint8_t i = 0;

  while(!digitalRead(sync));
  
  while (digitalRead(sync))
  {
    if(digitalRead(irSensorPin)) samples[i] = 1;
    else samples[i] = 0;
    delayMicroseconds(20);
    i++;
    if (i >= 100) i = 0;
  }

  if(trigger) //playNote

  for (uint8_t j = 0; j < 100; j++)
  {
    Serial.print(samples[j]);
  }
  Serial.println();
  
  if(Serial.read() == '0') Serial.end();
}


