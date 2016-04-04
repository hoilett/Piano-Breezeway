const uint8_t numKeys = 25; //two octaves

//Arduino IO pins
const uint8_t step_00 = 22;
const uint8_t step_01 = 23;
const uint8_t step_02 = 24;
const uint8_t step_03 = 25;
const uint8_t step_04 = 26;
const uint8_t step_05 = 27;
const uint8_t step_06 = 28;
const uint8_t step_07 = 29;
const uint8_t step_08 = 30;
const uint8_t step_09 = 31;
const uint8_t step_10 = 32;
const uint8_t step_11 = 33;
const uint8_t step_12 = 34;
const uint8_t step_13 = 35;
const uint8_t step_14 = 36;
const uint8_t step_15 = 37;
const uint8_t step_16 = 38;
const uint8_t step_17 = 39;
const uint8_t step_18 = 40;
const uint8_t step_19 = 41;
const uint8_t step_20 = 42;
const uint8_t step_21 = 43;
const uint8_t step_22 = 44;
const uint8_t step_23 = 45;
const uint8_t step_24 = 46;

const uint8_t step_array[numKeys] =
  {step_00, step_01, step_02, step_03, step_04,
   step_05, step_06, step_07, step_08, step_09, step_10,
   step_11, step_12, step_13, step_14, step_15, step_16,
   step_17, step_18, step_19, step_20, step_21, step_22,
   step_23, step_24 };

const uint16_t array_samples = 200;
uint16_t samples[array_samples] = {0};

void setup()
{
  Serial.begin(115200); 
  initializeDigitalInputs();
  delay(100);
}


void loop()
{
  uint16_t i = 0;
  while (i < array_samples)
  { 
    for (uint8_t y = 0; y < numKeys; y++)
    {
      samples[y] += !digitalRead(step_array[y]);
    }
    i++;
    delayMicroseconds(280);
  }

  

  for (uint8_t y = 0; y < numKeys; y++)
  {
    Serial.print(y);
    Serial.print(" : ");
    Serial.println(samples[y]);
  }
  Serial.end();

  //Serial.println(isStep());
}


void initializeDigitalInputs()
{
  for (uint8_t i = 0; i < numKeys; i++)
  {
    pinMode(step_array[i], INPUT_PULLUP);
  }
}


boolean isStep()
{
  uint8_t num = 0;
  for (uint8_t i = 0; i < array_samples; i++)
  {
    if (!samples00[i]) num++;
  }

  return (num < 3);
}
