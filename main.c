// Header Files Include
#include "header.h"
// Source Files Includes
#include "driverlib/eeprom.c"

/////////////////////////////////////////////////////////////////////////
//Global Variables
uint32_t takt = 120000000;
uint32_t joystickWaitTime = 0;

uint32_t ui32JoystickADCValues[4] = { 0, 0, 0, 0 };	// [X Position, Y Position]

volatile uint8_t b1_pressed = 0;
volatile uint8_t b2_pressed = 0;
volatile uint8_t displayClear = 0;

volatileVariables volatileStorage = {.actual_h = 0,.actual_min = 0,

  .illuminance_actual = 0,
  .illuminance_sum[0] = 0,.illuminance_sum[1] = 0,
  .illuminance_sum[2] = 0,.illuminance_sum[3] = 0,
  .illuminance_counter[0] = 0,
  .illuminance_counter[1] = 0,
  .illuminance_counter[2] = 0,
  .illuminance_counter[3] = 0,

  .temperature_actual = 0.0,
  .temperature_sum[0] = 0.0,
  .temperature_sum[1] = 0.0,
  .temperature_sum[2] = 0.0,
  .temperature_sum[3] = 0.0,
  .temperature_counter[0] = 0,
  .temperature_counter[1] = 0,
  .temperature_counter[2] = 0,
  .temperature_counter[3] = 0,

  .SoilHumidity[0] = 0,
  .SoilHumidity[1] = 0,.SoilHumidity[2] = 0,
  .SoilHumidity[3] = 0,

  .waterLevel = 0,

  .mainMenuState = 1,
  .selectTimeSetUp = 1,
  .selectWateringAmount = 1,
  .selectWaterInterval = 1,
  .selectInfluenceHumidity = 1,
  .selectInfluenceTemperature = 1,
  .selectInfluenceExposure = 1
};

/////////////////////////////////////////////////////////////////////////
int
main (void)
{
  char strBuffer[30];

  //Time Values
  unsigned char s;
  unsigned char min;
  unsigned char min_old;
  unsigned char hr;
  unsigned char hr_old;
  short hr_format = _24_hour_format;
  short am_pm;

  int displayState = StartPage;

  int getTimeFlag = 0;
  int b1counter = 1;
  int i;			//counter for plant numbers

  nonVolatileVariables EEPROMStorage;
  EEPROMStorage.write_to_EEPROM = false;


  setup (takt);
  getTime (&hr, &min, &s, &am_pm, hr_format);
  getHumidity (&volatileStorage);
  getTemperature (&volatileStorage);
  getExposure (&volatileStorage);

  EEPROMRead ((uint32_t *) & EEPROMStorage, E2PROM_STRUCT_ADRESS, sizeof (EEPROMStorage));

#ifdef INITIAL_START
  int var;

  for (var = 0; var < 5; ++var) {
      EEPROMStorage.humidityAWA[var] = 0.1f;
      EEPROMStorage.illuminanceAWA[var] = 0.1f;
      EEPROMStorage.temperatureAWA[var] = 0.1f;
  }
#endif


  while (1)
    {
      if (joystickWaitTime != 0)
	{
	  SysCtlDelay (joystickWaitTime);
	  joystickWaitTime = 0;
	}



      pumpMvOff ();

      if (displayClear)
	{
	  CFAF128128B0145T_clear (CFAF128128B0145T_color_black);
	  displayClear = 0;
	}
      hr_old = hr;
      min_old = min;
      getTime (&hr, &min, &s, &am_pm, hr_format);

      switch (displayState)
	{
	case StartPage:
	  {

	    CFAF128128B0145T_text (10, 5, "Blumengiessautomat",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    sprintf (strBuffer, "Uhrzeit: %02i:%02i:%02i   ", ((int) hr),
		     ((int) min), ((int) s));
	    CFAF128128B0145T_text (1, 25, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "Temperatur:  %2.1f C     ",
		     volatileStorage.temperature_actual);
	    CFAF128128B0145T_text (1, 35, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    sprintf (strBuffer, "Belichtung: %5.0i Lux  ",
		     volatileStorage.illuminance_actual);
	    CFAF128128B0145T_text (1, 45, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (1, 70, "P", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 80, "1", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 90, "2", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 100, "3", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 110, "4", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (10, 70, "in h",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    sprintf (strBuffer, "%03i",
		     EEPROMStorage.remainingTimeWatering[0]);
	    CFAF128128B0145T_text (15, 80, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%03i",
		     EEPROMStorage.remainingTimeWatering[1]);
	    CFAF128128B0145T_text (15, 90, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%03i",
		     EEPROMStorage.remainingTimeWatering[2]);
	    CFAF128128B0145T_text (15, 100, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%03i",
		     EEPROMStorage.remainingTimeWatering[3]);
	    CFAF128128B0145T_text (15, 110, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (40, 70, "WM", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.waterAmount[0]);
	    CFAF128128B0145T_text (40, 80, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.waterAmount[1]);
	    CFAF128128B0145T_text (40, 90, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.waterAmount[2]);
	    CFAF128128B0145T_text (40, 100, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.waterAmount[3]);
	    CFAF128128B0145T_text (40, 110, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (70, 70, "aktF",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", volatileStorage.SoilHumidity[0]);
	    CFAF128128B0145T_text (70, 80, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", volatileStorage.SoilHumidity[1]);
	    CFAF128128B0145T_text (70, 90, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", volatileStorage.SoilHumidity[2]);
	    CFAF128128B0145T_text (70, 100, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", volatileStorage.SoilHumidity[3]);
	    CFAF128128B0145T_text (70, 110, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (100, 70, "optF",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.humidityOpt[0]);
	    CFAF128128B0145T_text (100, 80, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.humidityOpt[1]);
	    CFAF128128B0145T_text (100, 90, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.humidityOpt[2]);
	    CFAF128128B0145T_text (100, 100, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    sprintf (strBuffer, "%04i", EEPROMStorage.humidityOpt[3]);
	    CFAF128128B0145T_text (100, 110, strBuffer,
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    if (b1pressed ())
	      {
		displayState = MainMenu;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }

	case MainMenu:
	  {
	    CFAF128128B0145T_text (20, 10, "Einstellungen",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.mainMenuState =
	      joystickYSelect (1, 9, 1, volatileStorage.mainMenuState, 7);
	    display_mainMenu (volatileStorage.mainMenuState);

	    if(EEPROMStorage.write_to_EEPROM){
		      EEPROMProgram ((uint32_t *) & EEPROMStorage, E2PROM_STRUCT_ADRESS, sizeof (EEPROMStorage));	//Write struct to EEPROM start from 0x0000
		      EEPROMStorage.write_to_EEPROM = false;
	    }

	    if (b1pressed ())
	      {
		displayState = volatileStorage.mainMenuState;
		b1counter = 1;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
		getTimeFlag = 0;

	      }
	    if (b2pressed ())
	      {
		displayState = StartPage;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }

	case PumpCalibration:
	  {
	    CFAF128128B0145T_text (10, 10, "Kalibrierung",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    display_pumpCalibration (b1counter, &EEPROMStorage);

	    if (b1pressed ())
	      {
		if (b1counter < 3)
		  {
		    b1counter++;
		  }
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    if (b2pressed ())
	      {
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case WateringAmounts:
	  {
	    CFAF128128B0145T_text (10, 10, "Wassermenge",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    volatileStorage.selectWateringAmount =
	      joystickYSelect (1, 4, 1, volatileStorage.selectWateringAmount,
			       7);
	    display_wateringAmounts (volatileStorage.selectWateringAmount,
				     &EEPROMStorage);

	    if (b2pressed ())
	      {
		EEPROMStorage.write_to_EEPROM = true;
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case TimeSetUp:
	  {
	    if (getTimeFlag == 0)
	      {
		getTime (&hr, &min, &s, &am_pm, hr_format);
		volatileStorage.actual_h = hr;
		volatileStorage.actual_min = min;
		getTimeFlag = 1;
	      }

	    CFAF128128B0145T_text (10, 10, "Uhrzeit",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.selectTimeSetUp =
	      joystickX (1, 2, 1, volatileStorage.selectTimeSetUp, 7);

	    display_timeSetUp (volatileStorage.selectTimeSetUp, &volatileStorage);

	    setTime ((char) volatileStorage.actual_h,
		     (char) volatileStorage.actual_min, (char) 50, 1,
		     _24_hour_format);
	    hr_old = (unsigned char) volatileStorage.actual_h;
	    hr = (unsigned char) volatileStorage.actual_h;
	    if (b2pressed ())
	      {
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case WateringInterval:
	  {
	    CFAF128128B0145T_text (1, 10, "Giessintervall (in h):",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.selectWaterInterval =
	      joystickYSelect (1, 4, 1, volatileStorage.selectWaterInterval,
			       7);
	    display_wateringInterval (volatileStorage.selectWaterInterval,
				      &EEPROMStorage);

	    if (b2pressed ())
	      {
		EEPROMStorage.write_to_EEPROM = true;
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case InfluenceHumidity:
	  {
	    CFAF128128B0145T_text (1, 10, "Einfluss Feuchtigkeit",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 50, "P1", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 60, "P2", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 70, "P3", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 80, "P4", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (40, 40, "opt",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (80, 40, "+WM",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (10, 100, "opt in ADC",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 110, "+WM in ml",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.selectInfluenceHumidity =
	      joystickX (1, 8, 1, volatileStorage.selectInfluenceHumidity, 7);

	    display_InfluenceHumidity (volatileStorage.
				       selectInfluenceHumidity,
				       &EEPROMStorage);
	    if (b2pressed ())
	      {
		EEPROMStorage.write_to_EEPROM = true;
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case InfluenceTemperature:
	  {
	    CFAF128128B0145T_text (1, 10, "Einfluss Temperatur",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 50, "P1", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 60, "P2", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 70, "P3", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 80, "P4", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (40, 40, "opt",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (80, 40, "+WM",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (10, 100, "opt in deg C",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 110, "+WM in ml",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.selectInfluenceTemperature =
	      joystickX (1, 8, 1, volatileStorage.selectInfluenceTemperature,
			 7);

	    display_InfluenceTemperature (volatileStorage.
					  selectInfluenceTemperature,
					  &EEPROMStorage);
	    if (b2pressed ())
	      {
		EEPROMStorage.write_to_EEPROM = true;
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }

	    break;
	  }
	case InfluenceExposure:
	  {
	    CFAF128128B0145T_text (1, 10, "Einfluss Belichtung",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 50, "P1", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 60, "P2", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 70, "P3", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 80, "P4", CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (40, 40, "opt",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (80, 40, "+WM",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    CFAF128128B0145T_text (10, 100, "opt in lux",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (10, 110, "+WM in ml",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);

	    volatileStorage.selectInfluenceExposure =
	      joystickX (1, 8, 1, volatileStorage.selectInfluenceExposure, 7);

	    display_InfluenceExposure (volatileStorage.
				       selectInfluenceExposure,
				       &EEPROMStorage);
	    if (b2pressed ())
	      {
		EEPROMStorage.write_to_EEPROM = true;
		displayState = MainMenu;
		displayClear = 1;
		b1_pressed = 0;
		b2_pressed = 0;
	      }
	    break;
	  }
	case BleedHoses:
	  {
	    CFAF128128B0145T_text (1, 10, "Ent-/Belueften",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 30, "Alle Magnetventile +",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 40, "Pumpe aktiviert",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    CFAF128128B0145T_text (1, 60, "B2 zum Abbrechen",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_black, 1, 1);
	    while (!b2_pressed)
	      {
		mv1On ();
		mv2On ();
		mv3On ();
		mv4On ();
		pumpOn ();
	      }
	    pumpMvOff ();

	    displayState = MainMenu;
	    displayClear = 1;
	    b1_pressed = 0;
	    b2_pressed = 0;
	    break;
	  }
	case Demo:
	  {
	    for (i = 0; i < 4; i++)
	      {
		watering (i, &EEPROMStorage);
	      }
	    displayState = MainMenu;
	    displayClear = 1;
	    b1_pressed = 0;
	    b2_pressed = 0;
	    break;
	  }
	  /*
	case WaterLevelLow:
	  {
	    CFAF128128B0145T_text (1, 50, "Wasserlevel zu niedrig!",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_red, 1, 1);
	    CFAF128128B0145T_text (1, 60, "Bitte auffuellen",
				   CFAF128128B0145T_color_white,
				   CFAF128128B0145T_color_red, 1, 1);
	    sing (&volatileStorage);
	    break;
	  }
	  */
	default:
	  {
	    break;
	  }
	}

      //Time: Down-Counter
      if (hr_old != hr)
	{
	  for (i = 0; i < 4; i++)
	    {
	      EEPROMStorage.remainingTimeWatering[i]--;
	    }
	}
      if (min_old != min)
	{
	  measurementTimer (displayState);
	}

      //Water Level Check
      /*
      if ((volatileStorage.waterLevel > 3800)
	  && !(displayState == WaterLevelLow))
	{
	  displayState = WaterLevelLow;
	  displayClear = 1;
	}
      if ((volatileStorage.waterLevel <= 3800)
	  && (displayState == WaterLevelLow))
	{
	  displayState = StartPage;
	  displayClear = 1;
	}
       */

      //Watering
      else
	{
	  for (i = 0; i < 4; i++)
	    {
	      if ((EEPROMStorage.remainingTimeWatering[i] <= 0))
		{
		  watering (i, &EEPROMStorage);
		}
	    }
	}

    }
}

void
watering (int plant, nonVolatileVariables * _EEPROMStorage)
{
  long double timeCounter = 0;
  char strBuffer[30];
  float adjustedWaterAmount;
  getHumidity (&volatileStorage);
  CFAF128128B0145T_clear (CFAF128128B0145T_color_black);

  //Berechnung
  _EEPROMStorage->illuminanceInt[plant] =
    volatileStorage.illuminance_sum[plant]
    / volatileStorage.illuminance_counter[plant];
  _EEPROMStorage->temperatureInt[plant] =
    volatileStorage.temperature_sum[plant]
    / volatileStorage.temperature_counter[plant];

  adjustedWaterAmount = ((float) _EEPROMStorage->waterAmount[plant])
    + (((float) volatileStorage.SoilHumidity[plant])
       - ((float) (_EEPROMStorage->humidityOpt[plant])))
    * ((float) _EEPROMStorage->humidityAWA[plant])
    + (((float) _EEPROMStorage->temperatureInt[plant])
       - ((float) ((float) _EEPROMStorage->temperatureOpt[plant])))
    * ((float) _EEPROMStorage->temperatureAWA[plant])
    + (((float) _EEPROMStorage->illuminanceInt[plant])
       - ((float) ((float) _EEPROMStorage->illuminanceOpt[plant])))
    * ((float) _EEPROMStorage->illuminanceAWA[plant]);
  if (adjustedWaterAmount > 0)
    {

      float wateringTime = (((float) _EEPROMStorage->ticksFor100ml) / 100.0)
	* adjustedWaterAmount;

      CFAF128128B0145T_clear (CFAF128128B0145T_color_black);

      CFAF128128B0145T_text (05, 10, "Giessvorgang",
			     CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "Pflanze %i", plant + 1);
      CFAF128128B0145T_text (05, 20, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "WM alt: %04.1f",
	       (float) _EEPROMStorage->waterAmount[plant]);
      CFAF128128B0145T_text (05, 40, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "WM neu: %04.1f", (float) adjustedWaterAmount);
      CFAF128128B0145T_text (05, 50, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "B int: %04.1f",
	       (float) _EEPROMStorage->illuminanceInt[plant]);
      CFAF128128B0145T_text (05, 60, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "T int: %02.1f",
	       (float) _EEPROMStorage->temperatureInt[plant]);
      CFAF128128B0145T_text (05, 70, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "F akt: %04.1f",
	       (float) volatileStorage.SoilHumidity[plant]);
      CFAF128128B0145T_text (05, 80, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      sprintf (strBuffer, "Abbruch Button1");
      CFAF128128B0145T_text (05, 100, strBuffer, CFAF128128B0145T_color_white,
			     CFAF128128B0145T_color_red, 1, 1);
      if (plant == 0)
	{
	  mv1On ();
	}
      if (plant == 1)
	{
	  mv2On ();
	}
      if (plant == 2)
	{
	  mv3On ();
	}
      if (plant == 3)
	{
	  mv4On ();
	}
      pumpOn ();
      while ((wateringTime > timeCounter) && (!b1_pressed))
	{
	  timeCounter++;
	  SysCtlDelay (12000);
	}

      pumpMvOff ();

      b1_pressed = 0;
    }
  _EEPROMStorage->illuminanceInt[plant] = 0;
  _EEPROMStorage->temperatureInt[plant] = 0;
  _EEPROMStorage->remainingTimeWatering[plant] =
    _EEPROMStorage->waterInterval[plant];

  displayClear = 1;
}

void
refreshMeasurements ()
{
  TimerIntClear (TIMER2_BASE, TIMER_TIMA_TIMEOUT);
  getHumidity (&volatileStorage);
  getTemperature (&volatileStorage);
  getExposure (&volatileStorage);
}

void
measurementTimer (int displayState)
{
  getExposure (&volatileStorage);
  getTemperature (&volatileStorage);
  int i = 0;

  //Temperatur
  for (i = 0; i < 4; i++)
    {
      if (volatileStorage.temperature_sum[i] == 0)
	{
	  volatileStorage.temperature_sum[i] =
	    volatileStorage.temperature_actual;
	  volatileStorage.temperature_counter[i] = 1;
	}
      if ((volatileStorage.temperature_sum[i] != 0)
	  && (displayState != TimeSetUp))
	{
	  volatileStorage.temperature_sum[i] =
	    volatileStorage.temperature_actual
	    + volatileStorage.temperature_sum[i];
	  volatileStorage.temperature_counter[i]++;
	}
    }

  //Brightness
  for (i = 0; i < 4; i++)
    {
      if (volatileStorage.illuminance_sum[i] == 0)
	{
	  volatileStorage.illuminance_sum[i] =
	    volatileStorage.illuminance_actual;
	  volatileStorage.illuminance_counter[i] = 1;
	}
      if ((volatileStorage.illuminance_sum[i] != 0)
	  && (displayState != TimeSetUp))
	{
	  volatileStorage.illuminance_sum[i] =
	    volatileStorage.illuminance_actual
	    + volatileStorage.illuminance_sum[i];
	  volatileStorage.illuminance_counter[i]++;
	}
    }

}
