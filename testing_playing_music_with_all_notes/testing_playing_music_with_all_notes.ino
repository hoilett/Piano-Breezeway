/*************************************************** 
  This is an example for the Adafruit VS1053 Codec Breakout

  Designed specifically to work with the Adafruit VS1053 Codec Breakout 
  ----> https://www.adafruit.com/products/1381

  Adafrit invests time and resources providing this open source code, 
  please support Adafruit and open-source hardware by purchasing 
  products from Adafruit!

  Written by Limor Fried/Ladyada for Adafruit Industries.  
  BSD license, all text above must be included in any redistribution
 ****************************************************/

//const int numKeys = 25;
//
//String piano[numKeys] = {"pi40_C4.mp3", "pi41.mp3", "pi42.mp3",
//  "pi43.mp3", "pi44.mp3", "pi45.mp3", "pi46.mp3", "pi47.mp3",
//  "pi48.mp3", "pi49.mp3", "pi50.mp3", "pi51.mp3", "pi52_C5.mp3",
//  "pi53.mp3", "pi54.mp3", "pi55.mp3", "pi56.mp3", "pi57.mp3",
//  "pi58.mp3", "pi59.mp3", "pi60.mp3", "pi61.mp3", "pi62.mp3",
//  "pi63.mp3", "pi64_C6.mp3" };


const uint8_t numKeys = 25;

//play every 75ms
String cello[numKeys] = {"Ce1_C2.mp3", "Ce2_Db2.mp3", "Ce3_D2.mp3",
  "Ce4_Eb2.mp3", "Ce5_E2.mp3", "Ce6_F2.mp3", "Ce7_Gb2.mp3",
  "Ce8_G2.mp3", "Ce9_Ab2.mp3", "Ce10_A2.mp3", "Ce11_Bb2.mp3",
  "Ce12_B2.mp3", "Ce13_C3.mp3", "Ce14_Db3.mp3", "Ce15_D3.mp3",
  "Ce16_Eb3.mp3", "Ce17_E3.mp3", "Ce18_F3.mp3", "Ce19_Gb3.mp3",
  "Ce20_G3.mp3", "Ce21_Ab3.mp3", "Ce22_A3.mp3", "Ce23_Bb3.mp3",
  "Ce24_B3.mp3", "Ce25_C4.mp3"};

//not okay
String clarinet[numKeys] = {"Cl1_C4.mp3", "Cl2_Db4.mp3", "Cl3_D4.mp3",
  "Cl4_Eb4.mp3", "Cl5_E4.mp3", "Cl6_F4.mp3", "Cl7_Gb4.mp3",
  "Cl8_G4.mp3", "Cl9_Ab4.mp3", "Cl10_A4.mp3", "Cl11_Bb4.mp3",
  "Cl12_B4.mp3", "Cl13_C5.mp3", "Cl14_Db5.mp3", "Cl15_D5.mp3",
  "Cl16_Eb5.mp3", "Cl17_E5.mp3", "Cl18_F5.mp3", "Cl19_Gb5.mp3",
  "Cl20_G5.mp3", "Cl21_Ab5.mp3", "Cl22_A5.mp3", "Cl23_Bb5.mp3",
  "Cl24_B5.mp3", "Cl25_C6.mp3"};

//150ms
String guitar[numKeys] = {"Gu1_C1.mp3", "Gu2_Db1.mp3",
  "Gu3_D1.mp3", "Gu4_Eb1.mp3", "Gu5_E1.mp3", "Gu6_F1.mp3",
  "Gu7_Gb1.mp3", "Gu8_G1.mp3", "Gu9_Ab1.mp3", "Gu10_A1.mp3",
  "Gu11_Bb1.mp3", "Gu12_B1.mp3", "Gu13_C2.mp3", "Gu14_Db2.mp3",
  "Gu15_D2.mp3", "Gu16_Eb2.mp3", "Gu17_E2.mp3", "Gu18_F2.mp3",
  "Gu19_Gb2.mp3", "Gu20_G2.mp3", "Gu21_Ab2.mp3", "Gu22_A2.mp3",
  "Gu23_Bb2.mp3", "Gu24_B2.mp3", "Gu25_C3.mp3" };

//20ms
//sounds great!
String piano[numKeys] = {"pi40_C4.mp3", "pi41.mp3", "pi42.mp3",
  "pi43.mp3", "pi44.mp3", "pi45.mp3", "pi46.mp3", "pi47.mp3",
  "pi48.mp3", "pi49.mp3", "pi50.mp3", "pi51.mp3", "pi52_C5.mp3",
  "pi53.mp3", "pi54.mp3", "pi55.mp3", "pi56.mp3", "pi57.mp3",
  "pi58.mp3", "pi59.mp3", "pi60.mp3", "pi61.mp3", "pi62.mp3",
  "pi63.mp3", "pi64_C6.mp3" };

//200ms
String sexyphone[numKeys] = {"Sa1_C3.mp3", "Sa2_Db3.mp3",
  "Sa3_D3.mp3", "Sa4_Eb3.mp3", "Sa5_E3.mp3", "Sa6_F3.mp3",
  "Sa7_Gb3.mp3", "Sa8_G3.mp3", "Sa9_Ab3.mp3", "Sa10_A3.mp3",
  "Sa11_Bb3.mp3", "Sa12_B3.mp3", "Sa13_C4.mp3", "Sa14_Db4.mp3",
  "Sa15_D4.mp3", "Sa16_Eb4.mp3", "Sa17_E4.mp3", "Sa18_F4.mp3",
  "Sa19_Gb4.mp3", "Sa20_G4.mp3", "Sa21_Ab4.mp3", "Sa22_A4.mp3",
  "Sa23_Bb4.mp3", "Sa24_B4.mp3", "Sa25_C5.mp3" };

//150ms
String steelDrum[numKeys] = {"SD1_C1.mp3", "SD2_Db1.mp3",
  "SD3_D1.mp3", "SD4_Eb1.mp3", "SD5_E1.mp3", "SD6_F1.mp3",
  "SD7_Gb1.mp3", "SD8_G1.mp3", "SD9_Ab1.mp3", "SD10_A1.mp3",
  "SD11_Bb1.mp3", "SD12_B1.mp3", "SD13_C2.mp3", "SD14_Db2.mp3",
  "SD15_D2.mp3", "SD16_Eb2.mp3", "SD17_E2.mp3", "SD18_F2.mp3",
  "SD19_Gb2.mp3", "SD20_G2.mp3", "SD21_Ab2.mp3", "SD22_A2.mp3",
  "SD23_Bb2.mp3", "SD24_B2.mp3", "SD25_C3.mp3" };

//50ms
String xylophone[numKeys] = {"Xy1_C5.mp3", "Xy2_Db5.mp3",
  "Xy3_D5.mp3", "Xy4_Eb5.mp3", "Xy5_E5.mp3", "Xy6_F5.mp3",
  "Xy7_Gb5.mp3", "Xy8_G5.mp3", "Xy9_Ab5.mp3", "Xy10_A5.mp3",
  "Xy11_Bb5.mp3", "Xy12_B5.mp3", "Xy13_C6.mp3", "Xy14_Db5.mp3",
  "Xy15_D6.mp3", "Xy16_Eb6.mp3", "Xy17_E6.mp3", "Xy18_F6.mp3",
  "Xy19_Gb6.mp3","Xy20_G6.mp3", "Xy21_Ab6.mp3", "Xy22_A6.mp3",
  "Xy23_Bb6.mp3", "Xy24_B6.mp3", "Xy25_C7.mp3" };



// include SPI, MP3 and SD libraries
#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>

// define the pins used
#define CLK 13       // SPI Clock, shared with SD card
#define MISO 12      // Input data, from VS1053/SD card
#define MOSI 11      // Output data, to VS1053/SD card
// Connect CLK, MISO and MOSI to hardware SPI pins. 
// See http://arduino.cc/en/Reference/SPI "Connections"

// These are the pins used for the breakout example
#define BREAKOUT_RESET  9      // VS1053 reset pin (output)
#define BREAKOUT_CS     10     // VS1053 chip select pin (output)
#define BREAKOUT_DCS    8      // VS1053 Data/command select pin (output)
// These are the pins used for the music maker shield
#define SHIELD_RESET  -1      // VS1053 reset pin (unused!)
#define SHIELD_CS     7      // VS1053 chip select pin (output)
#define SHIELD_DCS    6      // VS1053 Data/command select pin (output)

// These are common pins between breakout and shield
#define CARDCS 4     // Card chip select pin
// DREQ should be an Int pin, see http://arduino.cc/en/Reference/attachInterrupt
#define DREQ 3       // VS1053 Data request, ideally an Interrupt pin

Adafruit_VS1053_FilePlayer musicPlayer = 
  // create breakout-example object!
  //Adafruit_VS1053_FilePlayer(BREAKOUT_RESET, BREAKOUT_CS, BREAKOUT_DCS, DREQ, CARDCS);
  // create shield-example object!
  Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);


char filename[12];
int i = 0;
  
void setup() {
  Serial.begin(9600);
  Serial.println("Adafruit VS1053 Simple Test");

  if (! musicPlayer.begin()) { // initialise the music player
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  Serial.println(F("VS1053 found"));
  
  SD.begin(CARDCS);    // initialise the SD card
  
  // Set volume for left, right channels. lower numbers == louder volume!
  musicPlayer.setVolume(5,5);

  // Timer interrupts are not suggested, better to use DREQ interrupt!
  //musicPlayer.useInterrupt(VS1053_FILEPLAYER_TIMER0_INT); // timer int

  // If DREQ is on an interrupt pin (on uno, #2 or #3) we can do background
  // audio playing
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int

//  for (int i = 0; i < numKeys; i++)
//  {
//    char filename[12];
//    cello[i].toCharArray(filename, 12);
//    musicPlayer.startPlayingFile(filename);
//    //musicPlayer.playFullFile(filename);
//    Serial.println(filename);
//
//    unsigned long startTime = millis();
//    while ((millis()-startTime) < 200);
//    
//    //delay(300);
//    musicPlayer.stopPlaying();
//  }

  //musicPlayer.startPlayingFile("Xy16_Eb6.mp3");
}

void loop()
{
  for (int i = 0; i < 15; i++)
  {
    filename[i] = 0;
  }
  
  piano[i].toCharArray(filename, 15);
  musicPlayer.startPlayingFile(filename);
  //Serial.println(filename);

  unsigned long startTime = millis();
  while ((millis()-startTime) < 100);
  
  musicPlayer.stopPlaying();

  i++;

  if (i == 25) i = 0;
}