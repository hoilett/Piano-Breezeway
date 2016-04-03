//define pins. I used pins 4 and 5

//#define irSensorPin 5       // IR sensor on this pin
//int val;
//const uint8_t sync = 8; //hello world!

//uint8_t samples[100] = {0};

////Arduino IO pins
//const uint8_t step_00 = 2;
//const uint8_t step_01 = 3;
//const uint8_t step_02 = 4;
//const uint8_t step_03 = 5;
//const uint8_t step_04 = 6;
//const uint8_t step_05 = 7;
//const uint8_t step_06 = 8;
//const uint8_t step_07 = 9;
//const uint8_t step_08 = 10;
//const uint8_t step_09 = 11;
//const uint8_t step_10 = 12;
//const uint8_t step_11 = 13;
//const uint8_t step_12 = 14;
//const uint8_t step_13 = 15;
//const uint8_t step_14 = 16;
//const uint8_t step_15 = 17;
//const uint8_t step_16 = 18;
//const uint8_t step_17 = 19;
//const uint8_t step_18 = 20;
//const uint8_t step_19 = 21;
//const uint8_t step_20 = 22;
//const uint8_t step_21 = 23;
//const uint8_t step_22 = 24;
//const uint8_t step_23 = 25;
//const uint8_t step_24 = 26;


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

const uint8_t step_array[] =
  {step_00, step_01, step_02, step_03, step_04,
   step_05, step_06, step_07, step_08, step_09, step_10,
   step_11, step_12, step_13, step_14, step_15, step_16,
   step_17, step_18, step_19, step_20, step_21, step_22,
   step_23, step_24 };


uint8_t samples00[30] = {0};
//uint8_t samples01[15] = {0};
//uint8_t samples02[15] = {0};
//uint8_t samples03[15] = {0};
//uint8_t samples04[15] = {0};
//uint8_t samples05[15] = {0};
//uint8_t samples06[15] = {0};
//uint8_t samples07[15] = {0};
//uint8_t samples08[15] = {0};
//uint8_t samples09[15] = {0};
//uint8_t samples10[15] = {0};
//uint8_t samples11[15] = {0};
//uint8_t samples12[15] = {0};
//uint8_t samples13[15] = {0};
//uint8_t samples14[15] = {0};
//uint8_t samples15[15] = {0};
//uint8_t samples16[15] = {0};
//uint8_t samples17[15] = {0};
//uint8_t samples18[15] = {0};
//uint8_t samples19[15] = {0};
//uint8_t samples20[15] = {0};
//uint8_t samples21[15] = {0};
//uint8_t samples22[15] = {0};
//uint8_t samples23[15] = {0};
//uint8_t samples24[15] = {0};

const uint8_t numSteps = 25; //two octaves

uint8_t i = 0;
uint8_t m = 0;

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

  i = 0;
//unsigned long ln1 = micros();
while (i < 30)
{
    //unsigned long ln1 = micros();
    samples00[i] = digitalRead(step_array[0]);
//    samples01[i] = digitalRead(step_array[1]);
//    samples02[i] = digitalRead(step_array[2]);
//    samples03[i] = digitalRead(step_array[3]);
//    samples04[i] = digitalRead(step_array[4]);
//    samples05[i] = digitalRead(step_array[5]);
//    samples06[i] = digitalRead(step_array[6]);
//    samples07[i] = digitalRead(step_array[7]);
//    samples08[i] = digitalRead(step_array[8]);
//    samples09[i] = digitalRead(step_array[9]);
//    samples10[i] = digitalRead(step_array[10]);
//    samples11[i] = digitalRead(step_array[11]);
//    samples12[i] = digitalRead(step_array[12]);
//    samples13[i] = digitalRead(step_array[13]);
//    samples14[i] = digitalRead(step_array[14]);
//    samples15[i] = digitalRead(step_array[15]);
//    samples16[i] = digitalRead(step_array[16]);
//    samples17[i] = digitalRead(step_array[17]);
//    samples18[i] = digitalRead(step_array[18]);
//    samples19[i] = digitalRead(step_array[19]);
//    samples20[i] = digitalRead(step_array[20]);
//    samples21[i] = digitalRead(step_array[21]);
//    samples22[i] = digitalRead(step_array[22]);
//    samples23[i] = digitalRead(step_array[23]);
//    samples24[i] = digitalRead(step_array[24]);
//    unsigned long ln2 = micros();
    i++;
    //delay(10);
//    Serial.println(ln1);
//    Serial.println(ln2);
}
//unsigned long ln2 = micros();

//    Serial.println(ln1);
//    Serial.println(ln2);
    

//    if(digitalRead(irSensorPin)) samples[i] = 1;
//    else samples[i] = 0;
//
//    delayMicroseconds(20);
//    i++;
//    if (i >= 100) i = 0;
//  }

  Serial.print("#00: ");
  for (uint8_t j = 0; j < 30; j++)
  {
    Serial.print(samples00[j]);
  }
  Serial.println();

//  Serial.print("#01: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples01[j]);
//  }
//  Serial.println();
//
//  Serial.print("#02: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples02[j]);
//  }
//  Serial.println();
//
//  Serial.print("#03: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples03[j]);
//  }
//  Serial.println();
//
//  Serial.print("#04: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples04[j]);
//  }
//  Serial.println();
//
//  Serial.print("#05: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples05[j]);
//  }
//  Serial.println();
//
//  Serial.print("#06: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples06[j]);
//  }
//  Serial.println();
//
//  Serial.print("#07: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples07[j]);
//  }
//  Serial.println();
//
//  Serial.print("#08: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples08[j]);
//  }
//  Serial.println();
//
//  Serial.print("#09: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples09[j]);
//  }
//  Serial.println();
//
//  Serial.print("#10: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples10[j]);
//  }
//  Serial.println();
//
//  Serial.print("#11: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples11[j]);
//  }
//  Serial.println();
//  
//  Serial.print("#12: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples12[j]);
//  }
//  Serial.println();
//
//  Serial.print("#13: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples13[j]);
//  }
//  Serial.println();
//
//  Serial.print("#14: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples14[j]);
//  }
//  Serial.println();
//
//  Serial.print("#15: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples15[j]);
//  }
//  Serial.println();
//
//  Serial.print("#16: ");
//
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples16[j]);
//  }
//  Serial.println();
//
//  Serial.print("#17: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples17[j]);
//  }
//  Serial.println();
//
//  Serial.print("#18: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples18[j]);
//  }
//  Serial.println();
//
//  Serial.print("#19: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples19[j]);
//  }
//  Serial.println();
//
//  Serial.print("#20: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples20[j]);
//  }
//  Serial.println();
//
//  Serial.print("#21: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples21[j]);
//  }
//  Serial.println();
//
//  Serial.print("#22: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples22[j]);
//  }
//  Serial.println();
//  
//  Serial.print("#23: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples23[j]);
//  }
//  Serial.println();
//
//  Serial.print("#24: ");
//  for (uint8_t j = 0; j < 15; j++)
//  {
//    Serial.print(samples24[j]);
//  }
//  Serial.println();

  Serial.println('\n');
  m++;
  if (m == 30) Serial.end();
  
}


void initializeDigitalInputs()
{
  for (uint8_t i = 0; i < numSteps; i++)
  {
    pinMode(step_array[i], INPUT);
  }
}



/*
void loop()
{
//  uint8_t i = 0;

//  while(!digitalRead(sync));
//  
//  while (digitalRead(sync))
//  {

//unsigned long ln1 = micros();
while (i < 10)
{
    unsigned long ln1 = micros();
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
    unsigned long ln2 = micros();
    i++;
    Serial.println(ln1);
    Serial.println(ln2);
}
//unsigned long ln2 = micros();

//    Serial.println(ln1);
//    Serial.println(ln2);
    

//    if(digitalRead(irSensorPin)) samples[i] = 1;
//    else samples[i] = 0;
//
//    delayMicroseconds(20);
//    i++;
//    if (i >= 100) i = 0;
//  }

  Serial.print("#00: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples00[j]);
  }
  Serial.println();

  Serial.print("#01: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples01[j]);
  }
  Serial.println();

  Serial.print("#02: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples02[j]);
  }
  Serial.println();

  Serial.print("#03: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples03[j]);
  }
  Serial.println();

  Serial.print("#04: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples04[j]);
  }
  Serial.println();

  Serial.print("#05: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples05[j]);
  }
  Serial.println();

  Serial.print("#06: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples06[j]);
  }
  Serial.println();

  Serial.print("#07: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples07[j]);
  }
  Serial.println();

  Serial.print("#08: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples08[j]);
  }
  Serial.println();

  Serial.print("#09: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples09[j]);
  }
  Serial.println();

  Serial.print("#10: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples10[j]);
  }
  Serial.println();

  Serial.print("#11: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples11[j]);
  }
  Serial.println();
  
  Serial.print("#12: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples12[j]);
  }
  Serial.println();

  Serial.print("#13: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples13[j]);
  }
  Serial.println();

  Serial.print("#14: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples14[j]);
  }
  Serial.println();

  Serial.print("#15: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples15[j]);
  }
  Serial.println();

  Serial.print("#16: ");

  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples16[j]);
  }
  Serial.println();

  Serial.print("#17: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples17[j]);
  }
  Serial.println();

  Serial.print("#18: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples18[j]);
  }
  Serial.println();

  Serial.print("#19: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples19[j]);
  }
  Serial.println();

  Serial.print("#20: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples20[j]);
  }
  Serial.println();

  Serial.print("#21: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples21[j]);
  }
  Serial.println();

  Serial.print("#22: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples22[j]);
  }
  Serial.println();
  
  Serial.print("#23: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples23[j]);
  }
  Serial.println();

  Serial.print("#24: ");
  for (uint8_t j = 0; j < 10; j++)
  {
    Serial.print(samples24[j]);
  }
  Serial.println();

  Serial.end();
  
}


void initializeDigitalInputs()
{
  for (uint8_t i = 0; i < numSteps; i++)
  {
    pinMode(step_array[i], INPUT);
  }
}

*/
