//define pins. I used pins 4 and 5

#define irSensorPin 5       // IR sensor on this pin
int val;
const uint8_t sync = 8;

uint8_t samples[100] = {0};


//Arduino IO pins
const uint8_t step_00 = 2;
const uint8_t step_01 = 3;
const uint8_t step_02 = 4;
const uint8_t step_03 = 5;
const uint8_t step_04 = 6;
const uint8_t step_05 = 7;
const uint8_t step_06 = 8;
const uint8_t step_07 = 9;
const uint8_t step_08 = 10;
const uint8_t step_09 = 11;
const uint8_t step_10 = 12;
const uint8_t step_11 = 13;
const uint8_t step_12 = 14;
const uint8_t step_13 = 15;
const uint8_t step_14 = 16;
const uint8_t step_15 = 17;
const uint8_t step_16 = 18;
const uint8_t step_17 = 19;
const uint8_t step_18 = 20;
const uint8_t step_19 = 21;
const uint8_t step_20 = 22;
const uint8_t step_21 = 23;
const uint8_t step_22 = 24;
const uint8_t step_23 = 25;
const uint8_t step_24 = 26;

const uint8_t step_arrays[] =
  {step_00, step_01, step_02, step_03, step_04,
   step_05, step_06, step_07, step_08, step_09, step_10,
   step_11, step_12, step_13, step_14, step_15, step_16,
   step_17, step_18, step_19, step_20, step_21, step_22,
   step_23, step_24 };


uint8_t samples00[10] = 0;
uint8_t samples01[10] = 0;
uint8_t samples02[10] = 0;
uint8_t samples03[10] = 0;
uint8_t samples04[10] = 0;
uint8_t samples05[10] = 0;
uint8_t samples06[10] = 0;
uint8_t samples07[10] = 0;
uint8_t samples08[10] = 0;
uint8_t samples09[10] = 0;
uint8_t samples10[10] = 0;
uint8_t samples11[10] = 0;
uint8_t samples12[10] = 0;
uint8_t samples13[10] = 0;
uint8_t samples14[10] = 0;
uint8_t samples15[10] = 0;
uint8_t samples16[10] = 0;
uint8_t samples17[10] = 0;
uint8_t samples18[10] = 0;
uint8_t samples19[10] = 0;
uint8_t samples20[10] = 0;
uint8_t samples21[10] = 0;
uint8_t samples22[10] = 0;
uint8_t samples23[10] = 0;
uint8_t samples24[10] = 0;

const uint8_t numSteps = 25; //two octaves

uint8_t i = 0;

void setup()
{
//  pinMode(irSensorPin, INPUT);
//  pinMode(sync, INPUT);
  Serial.begin(115200); 
  Serial.println("Program Starting"); 
  delay(100);
}



void loop()
{
//  uint8_t i = 0;

//  while(!digitalRead(sync));
//  
//  while (digitalRead(sync))
//  {
    samples00[i] = digitalRead(step_array[0]);
    samples01[i] = digitalRead(step_array[1]);
    samples02[i] = digitalRead(step_array[2]);
    samples03[i] = digitalRead(step_array[3]);
    samples04[i] = digitalRead(step_array[4]);
    samples05[i] = digitalRead(step_array[5]);
    samples06[i] = digitalRead(step_array[6]);
    samples07[i] = digitalRead(step_array[7]);
    samples08[i] = digitalRead(step_array[8]);
    samples09[i] = digitalRead(step_array[9]);
    samples10[i] = digitalRead(step_array[10]);
    samples11[i] = digitalRead(step_array[11]);
    samples12[i] = digitalRead(step_array[12]);
    samples13[i] = digitalRead(step_array[13]);
    samples14[i] = digitalRead(step_array[14]);
    samples15[i] = digitalRead(step_array[15]);
    samples16[i] = digitalRead(step_array[16]);
    samples17[i] = digitalRead(step_array[17]);
    samples18[i] = digitalRead(step_array[18]);
    samples19[i] = digitalRead(step_array[19]);
    samples20[i] = digitalRead(step_array[20]);
    samples21[i] = digitalRead(step_array[21]);
    samples22[i] = digitalRead(step_array[22]);
    samples23[i] = digitalRead(step_array[23]);
    samples24[i] = digitalRead(step_array[24]);

    i++;

//    if(digitalRead(irSensorPin)) samples[i] = 1;
//    else samples[i] = 0;
//
//    delayMicroseconds(20);
//    i++;
//    if (i >= 100) i = 0;
//  }


  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples[j]);
  }
  Serial.println();
  
}


void initializeDigitalInputs()
{
  for (uint8_t i = 0; i < numSteps; i++)
  {
    pinMode(step_arrays[i], INTPUT);
  }
}

