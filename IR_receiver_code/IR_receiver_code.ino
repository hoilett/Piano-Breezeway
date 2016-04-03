//define pins. I used pins 4 and 5

#define irSensorPin 5       // IR sensor on this pin
int val;
const uint8_t sync = 8;

uint8_t samples[400] = {0};

//You're a bitch

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
    samples[i] = (uint8_t)digitalRead(irSensorPin);
    delayMicroseconds(4);
    if(Serial.read() == '0') Serial.end();
    i++;
  }

  for (uint8_t j = 0; j < 400; j++)
  {
    Serial.print(samples[j]);
  }
  Serial.println();
  
  if(Serial.read() == '0') Serial.end();
}


