//const uint8_t numSteps = 25;
const uint8_t numKeys = 13;

////play every 75ms
String cello[25] = {"Ce1_C2.mp3", "Ce2_Db2.mp3", "Ce3_D2.mp3",
  "Ce4_Eb2.mp3", "Ce5_E2.mp3", "Ce6_F2.mp3", "Ce7_Gb2.mp3",
  "Ce8_G2.mp3", "Ce9_Ab2.mp3", "Ce10_A2.mp3", "Ce11_Bb2.mp3",
  "Ce12_B2.mp3", "Ce13_C3.mp3", "Ce14_Db3.mp3", "Ce15_D3.mp3",
  "Ce16_Eb3.mp3", "Ce17_E3.mp3", "Ce18_F3.mp3", "Ce19_Gb3.mp3",
  "Ce20_G3.mp3", "Ce21_Ab3.mp3", "Ce22_A3.mp3", "Ce23_Bb3.mp3",
  "Ce24_B3.mp3", "Ce25_C4.mp3"};
//
////not okay
//String clarinet[numKeys] = {"Cl1_C4.mp3", "Cl2_Db4.mp3", "Cl3_D4.mp3",
//  "Cl4_Eb4.mp3", "Cl5_E4.mp3", "Cl6_F4.mp3", "Cl7_Gb4.mp3",
//  "Cl8_G4.mp3", "Cl9_Ab4.mp3", "Cl10_A4.mp3", "Cl11_Bb4.mp3",
//  "Cl12_B4.mp3", "Cl13_C5.mp3", "Cl14_Db5.mp3", "Cl15_D5.mp3",
//  "Cl16_Eb5.mp3", "Cl17_E5.mp3", "Cl18_F5.mp3", "Cl19_Gb5.mp3",
//  "Cl20_G5.mp3", "Cl21_Ab5.mp3", "Cl22_A5.mp3", "Cl23_Bb5.mp3",
//  "Cl24_B5.mp3", "Cl25_C6.mp3"};
//
////150ms
//String guitar[numKeys] = {"Gu1_C1.mp3", "Gu2_Db1.mp3",
//  "Gu3_D1.mp3", "Gu4_Eb1.mp3", "Gu5_E1.mp3", "Gu6_F1.mp3",
//  "Gu7_Gb1.mp3", "Gu8_G1.mp3", "Gu9_Ab1.mp3", "Gu10_A1.mp3",
//  "Gu11_Bb1.mp3", "Gu12_B1.mp3", "Gu13_C2.mp3", "Gu14_Db2.mp3",
//  "Gu15_D2.mp3", "Gu16_Eb2.mp3", "Gu17_E2.mp3", "Gu18_F2.mp3",
//  "Gu19_Gb2.mp3", "Gu20_G2.mp3", "Gu21_Ab2.mp3", "Gu22_A2.mp3",
//  "Gu23_Bb2.mp3", "Gu24_B2.mp3", "Gu25_C3.mp3" };

//20ms
//sounds great!
String piano[25] = {"pi40_C4.mp3", "pi41.mp3", "pi42.mp3",
  "pi43.mp3", "pi44.mp3", "pi45.mp3", "pi46.mp3", "pi47.mp3",
  "pi48.mp3", "pi49.mp3", "pi50.mp3", "pi51.mp3", "pi52_C5.mp3",
  "pi53.mp3", "pi54.mp3", "pi55.mp3", "pi56.mp3", "pi57.mp3",
  "pi58.mp3", "pi59.mp3", "pi60.mp3", "pi61.mp3", "pi62.mp3",
  "pi63.mp3", "pi64_C6.mp3" };

////200ms
String sexyphone[25] = {"Sa1_C3.mp3", "Sa2_Db3.mp3",
  "Sa3_D3.mp3", "Sa4_Eb3.mp3", "Sa5_E3.mp3", "Sa6_F3.mp3",
  "Sa7_Gb3.mp3", "Sa8_G3.mp3", "Sa9_Ab3.mp3", "Sa10_A3.mp3",
  "Sa11_Bb3.mp3", "Sa12_B3.mp3", "Sa13_C4.mp3", "Sa14_Db4.mp3",
  "Sa15_D4.mp3", "Sa16_Eb4.mp3", "Sa17_E4.mp3", "Sa18_F4.mp3",
  "Sa19_Gb4.mp3", "Sa20_G4.mp3", "Sa21_Ab4.mp3", "Sa22_A4.mp3",
  "Sa23_Bb4.mp3", "Sa24_B4.mp3", "Sa25_C5.mp3" };
//
////150ms
String steelDrum[25] = {"SD1_C1.mp3", "SD2_Db1.mp3",
  "SD3_D1.mp3", "SD4_Eb1.mp3", "SD5_E1.mp3", "SD6_F1.mp3",
  "SD7_Gb1.mp3", "SD8_G1.mp3", "SD9_Ab1.mp3", "SD10_A1.mp3",
  "SD11_Bb1.mp3", "SD12_B1.mp3", "SD13_C2.mp3", "SD14_Db2.mp3",
  "SD15_D2.mp3", "SD16_Eb2.mp3", "SD17_E2.mp3", "SD18_F2.mp3",
  "SD19_Gb2.mp3", "SD20_G2.mp3", "SD21_Ab2.mp3", "SD22_A2.mp3",
  "SD23_Bb2.mp3", "SD24_B2.mp3", "SD25_C3.mp3" };

////50ms
String xylophone[25] = {"Xy1_C5.mp3", "Xy2_Db5.mp3",
  "Xy3_D5.mp3", "Xy4_Eb5.mp3", "Xy5_E5.mp3", "Xy6_F5.mp3",
  "Xy7_Gb5.mp3", "Xy8_G5.mp3", "Xy9_Ab5.mp3", "Xy10_A5.mp3",
  "Xy11_Bb5.mp3", "Xy12_B5.mp3", "Xy13_C6.mp3", "Xy14_Db5.mp3",
  "Xy15_D6.mp3", "Xy16_Eb6.mp3", "Xy17_E6.mp3", "Xy18_F6.mp3",
  "Xy19_Gb6.mp3","Xy20_G6.mp3", "Xy21_Ab6.mp3", "Xy22_A6.mp3",
  "Xy23_Bb6.mp3", "Xy24_B6.mp3", "Xy25_C7.mp3" };


#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>

#define CLK 13
#define MISO 12
#define MOSI 11

#define SHIELD_RESET  -1
#define SHIELD_CS     7
#define SHIELD_DCS    6

#define CARDCS 4
#define DREQ 3

Adafruit_VS1053_FilePlayer musicPlayer =
    Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);

//char filename[15];
//int i = 0;


const uint8_t step_00 = 44;
const uint8_t step_01 = 40;
const uint8_t step_02 = 32;
const uint8_t step_03 = 53;
const uint8_t step_04 = 26;
const uint8_t step_05 = 22;
const uint8_t step_06 = 31;
const uint8_t step_07 = 50;
const uint8_t step_08 = 21;
const uint8_t step_09 = 47;
const uint8_t step_10 = 19;
const uint8_t step_11 = 17;
const uint8_t step_12 = 15;
//const uint8_t step_14 = 36;
//const uint8_t step_15 = 37;
//const uint8_t step_16 = 38;
//const uint8_t step_17 = 39;
//const uint8_t step_18 = 40;
//const uint8_t step_19 = 41;
//const uint8_t step_20 = 42;
//const uint8_t step_21 = 43;
//const uint8_t step_22 = 44;
//const uint8_t step_23 = 45;
//const uint8_t step_24 = 46;

//const uint8_t step_array[numKeys] =
//  {step_00, step_01, step_02, step_03, step_04,
//   step_05, step_06, step_07, step_08, step_09, step_10,
//   step_11, step_12, step_13, step_14, step_15, step_16,
//   step_17, step_18, step_19, step_20, step_21, step_22,
//   step_23, step_24 };

const uint8_t step_array[numKeys] =
  {step_00, step_01, step_02, step_03, step_04,
   step_05, step_06, step_07, step_08, step_09, step_10,
   step_11, step_12};

//const uint8_t numSteps = 25; //two octaves
const uint8_t numSteps = 13; //two octaves

const uint16_t array_samples = 1100;
uint16_t samples[array_samples] = {0};
boolean sampleClear[array_samples] = {true};

uint8_t lastNote = 255;
unsigned long lastPlay = 0;

const uint8_t sync = 46;

void setup()
{
  Serial.begin(115200);
  initializeDigitalInputs();
  pinMode(sync, INPUT);

  clearSamplesArray();

  if (! musicPlayer.begin())
  {
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  Serial.println(F("VS1053 found"));
  
  SD.begin(CARDCS);
  musicPlayer.setVolume(20,20);
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);
}

void loop()
{
  uint16_t i = 0;
  
  clearSamplesArray();
  sampleDetectors();
  Serial.println("hello");
  printSamples();
  play();

}


void initializeDigitalInputs()
{
  for (uint8_t i = 0; i < numKeys; i++)
  {
    pinMode(step_array[i], INPUT_PULLUP);
  }
}

void clearSamplesArray()
{
  for (uint8_t k = 0; k < numKeys; k++)
  {
    samples[k] = 0;
    //sampleClear[k] = true;
  }

  //amples[numKeys-2] = 6;
  //samples[numKeys-4] = 6;
}


//void sampleDetectors()
//
//
void sampleDetectors()
{
  int i = 0;
  while(!digitalRead(sync));
  while (i < array_samples && digitalRead(sync))
  {
    unsigned long p = micros();
    for (uint8_t y = 0; y < numKeys; y++)
    {
      if (!digitalRead(step_array[y])) samples[y] += 1;
    }
    i++;
    while(micros()-p < 70);
  }
}


void printSamples()
{
  for (uint8_t y = 0; y < numKeys; y++)
  {
    Serial.println(samples[y]);
  }
  Serial.println();
}


void play()
{
  for (uint8_t y = 0; y < numKeys; y++)
  {
    //if (samples[y] < 1 && sampleClear[y])
    if (samples[y] < 1 && sampleClear[y])
    {
      sampleClear[y] = false;
      char filename[15];
      piano[y].toCharArray(filename, 15);
      //xylophone[y].toCharArray(filename, 15);
      musicPlayer.startPlayingFile(filename);
      delay(50); //no more than 70ms
      musicPlayer.stopPlaying();
      lastNote = y;
      lastPlay = millis();
    }
    else if (samples[y] > 4)
    {
      sampleClear[y] = true;
    }
    else {}
  }
}

