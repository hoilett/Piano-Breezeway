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