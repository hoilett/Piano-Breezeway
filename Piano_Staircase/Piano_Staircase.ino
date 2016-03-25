// include SPI, MP3 and SD libraries
#include <SPI.h>
#include <Adafruit_VS1053.h>
#include <SD.h>


// define the pins used
//#define CLK 13       // SPI Clock, shared with SD card
//#define MISO 12      // Input data, from VS1053/SD card
//#define MOSI 11      // Output data, to VS1053/SD card
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
    Adafruit_VS1053_FilePlayer(SHIELD_RESET, SHIELD_CS, SHIELD_DCS, DREQ, CARDCS);




const uint8_t step_00 = 0;
const uint8_t step_01 = 1;
const uint8_t step_02 = 2;
const uint8_t step_03 = 3;
const uint8_t step_04 = 4;
const uint8_t step_05 = 5;
const uint8_t step_06 = 6;
const uint8_t step_07 = 7;
const uint8_t step_08 = 8;
const uint8_t step_09 = 9;
const uint8_t step_10 = 10;

const uint8_t step_arrays[] = {step_00, step_01, step_02, step_03, step_04,
                               step_05, step_06, step_07, step_08, step_09, step_10
                              };

const uint8_t numSteps = 11;


void setup()
{
	Serial.begin(115200);
	initializeDigitalInputs();


  Serial.println("Adafruit VS1053 Simple Test");

  if (! musicPlayer.begin()) { // initialise the music player
     Serial.println(F("Couldn't find VS1053, do you have the right pins defined?"));
     while (1);
  }
  Serial.println(F("VS1053 found"));
  
  SD.begin(CARDCS);    // initialise the SD card
  
  // Set volume for left, right channels. lower numbers == louder volume!
  musicPlayer.setVolume(20,20);

  // Timer interrupts are not suggested, better to use DREQ interrupt!
  //musicPlayer.useInterrupt(VS1053_FILEPLAYER_TIMER0_INT); // timer int

  // If DREQ is on an interrupt pin (on uno, #2 or #3) we can do background
  // audio playing
  musicPlayer.useInterrupt(VS1053_FILEPLAYER_PIN_INT);  // DREQ int
  
  // Play one file, don't return until complete
  Serial.println(F("Playing track 001"));
  musicPlayer.playFullFile("track001.mp3");
  // Play another file in the background, REQUIRES interrupts!
  Serial.println(F("Playing track 002"));
  musicPlayer.startPlayingFile("track002.mp3");
}

void loop()
{
	checkSensors();
}


void checkSensors()
{
	for (uint8_t i = 0; i < numSteps; i++)
	{
		if (!digitalRead(step_arrays[i]))
		{
			playNote(step_array[i]);
		}
	}
}


void initializeDigitalInputs()
{
	for (uint8_t i = 0; i < numSteps; i++)
	{
		pinMode(step_arrays[i], INTPUT);
	}
}



/*
 * LAYOUT
 *
 * 1. Each step has an IR led and IR receiver pair
 * 2. The IR LEDs are pulsed at the appropriate carrier frequency
 *    of the IR detector (38.5 kHz)
 * 3. When IR LED & detector pair are interrupted, a "step" has
 *    been made
 * 4. Triggers signal to play a "note"
 */
