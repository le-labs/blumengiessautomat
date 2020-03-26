
#ifndef HEADER_H_
#define HEADER_H_

//Header Files Include
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "inc/hw_i2c.h"
#include "inc/hw_ints.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/adc.h"
#include "driverlib/i2c.h"
#include "driverlib/interrupt.h"
#include "driverlib/pin_map.h"
#include "driverlib/sysctl.h"
#include "CFAF128128B0145T/CFAF128128B0145T.h"
#include "driverlib/timer.h"
#include "driverlib/debug.h"
#include "driverlib/fpu.h"
#include "driverlib/pwm.h"

// The error routine that is called if the driver library encounters an error.
#ifdef DEBUG
void __error__(char *pcFilename, uint32_t ui32Line)
{
}
#endif

//Define I2C Addresses
#define DS3231_I2C_ADDRESS          0x68
#define OPT3001_I2C_ADDRESS         0x44

//Define RTC Registers
#define secondREG                   0x00
#define minuteREG                   0x01
#define hourREG                     0x02
#define dayREG                      0x03
#define dateREG                     0x04
#define monthREG                    0x05
#define yearREG                     0x06
#define alarm1secREG                0x07
#define alarm1minREG                0x08
#define alarm1hrREG                 0x09
#define alarm1dateREG               0x0A
#define alarm2minREG                0x0B
#define alarm2hrREG                 0x0C
#define alarm2dateREG               0x0D
#define controlREG                  0x0E
#define statusREG                   0x0F
#define ageoffsetREG                0x10
#define tempMSBREG                  0x11
#define tempLSBREG                  0x12

#define _24_hour_format             0
#define _12_hour_format             1
#define am                          0
#define pm                          1


//Defines for EEPROM
#define E2PROM_STRUCT_ADRESS 0x0F00

//Globale Declarations
typedef struct nonVolatileVariablesStruct nonVolatileVariables;
typedef struct volatileVariablesStruct volatileVariables;

//Global Variables
extern uint32_t takt;
extern uint32_t joystickWaitTime;
extern uint32_t ui32JoystickADCValues[4];  // [X Position, Y Position]
extern volatile uint8_t b1_pressed;
extern volatile uint8_t b2_pressed;
extern volatile uint8_t displayClear;

struct volatileVariablesStruct
{
    uint8_t actual_h;
    uint8_t actual_min;

    uint16_t illuminance_actual;
    uint32_t illuminance_sum[4];
    uint32_t illuminance_counter[4];

    float temperature_actual;
    float temperature_sum[4];
    uint32_t temperature_counter[4];

    uint16_t SoilHumidity[4];
    uint16_t waterLevel;

    uint8_t mainMenuState;

    uint8_t selectTimeSetUp;
    uint8_t selectWateringAmount;
    uint8_t selectWaterInterval;
    uint8_t selectInfluenceHumidity;
    uint8_t selectInfluenceTemperature;
    uint8_t selectInfluenceExposure;
};
struct nonVolatileVariablesStruct
{
    uint16_t waterAmount[4];
    uint16_t waterInterval[4];
    uint16_t remainingTimeWatering[4];

    uint16_t humidityOpt[4]; // optimale Feuchte
    float humidityAWA[4]; // zusätzliche Wassermenge / delta Feuchte

    uint16_t illuminanceOpt[4]; // optimale Belichtung
    float illuminanceAWA[4]; // zusätzliche Wassermenge / delta Belichtung
    uint16_t illuminanceInt[4]; // integrierte Belichtung

    int8_t temperatureOpt[4]; // optimale Temperatur
    float temperatureAWA[4]; // zusätzliche Wassermenge / delta Temperatur
    int8_t temperatureInt[4]; // integrierte Temperatur

    uint32_t ticksFor100ml;
};
enum DisplayStates
{
    StartPage = 10,
    MainMenu = 11,
    WaterLevelLow=12,

    WateringAmounts = 1,
    WateringInterval = 2,
    InfluenceHumidity = 3,
    InfluenceTemperature = 4,
    InfluenceExposure = 5,
    BleedHoses = 6,
    PumpCalibration = 7,
    TimeSetUp = 8,
    Demo = 9
};
////////////////////////////////////////////////////////////////////////
//Prototypes

//RTC
unsigned char bcd_to_decimal(unsigned char d);
unsigned char decimal_to_bcd(unsigned char d);
unsigned char DS3231_Read(unsigned char address);
void DS3231_Write(unsigned char address, unsigned char value);
void DS3231_init();
void getTime(unsigned char *p3, unsigned char *p2, unsigned char *p1, short *p0,
             short hour_format);
void setTime(unsigned char hSet, unsigned char mSet, unsigned char sSet,
             short am_pm_state, short hour_format);

//Ambient Light Sensor
void OPT3001_init();
uint16_t OPT3001_Read(uint16_t registernummer);
void OPT3001_Write(uint16_t registernummer, uint16_t value);

// Messwert Management
void refreshMeasurements();
void measurementTimer(int displayState);

void getHumidity(volatileVariables *_volatileStorage);
void getExposure(volatileVariables *_volatileStorage);
void getTemperature(volatileVariables *_volatileStorage);

// Gießfunktion
void watering(int pflanzennummer, nonVolatileVariables *_VariableStorage);

//Pumpe / Magnetventile Funktionen
void pumpMvOff();
void pumpOn();
void mv1On();
void mv2On();
void mv3On();
void mv4On();

//Display Funktionen
void display_mainMenu(int Xcounter);
void display_timeSetUp(int Ycounter, nonVolatileVariables *_EEPROMStorage, volatileVariables *_volatileStorage);
void display_pumpCalibration(int Buttoncounter, nonVolatileVariables *_EEPROMStorage);
void display_wateringAmounts(int Xcounter, nonVolatileVariables *_EEPROMStorage);
void display_wateringInterval(int Xcounter, nonVolatileVariables *_EEPROMStorage);
void display_InfluenceHumidity(int Ycounter, nonVolatileVariables *_EEPROMStorage);
void display_InfluenceTemperature(int Xcounter, nonVolatileVariables *_EEPROMStorage);
void display_InfluenceExposure(int Xcounter, nonVolatileVariables *_EEPROMStorage);

//Knöpfe und Joystick
void debounce();
float joystickX(float xDelta, float xMax, float xMin, float xActualCounter,
                uint32_t xSpeed);
float joystickY(float yDelta, float yMax, float yMin, float yActualCounter,
                uint32_t ySpeed);
float joystickYSelect(float yDelta, float yMax, float yMin,
                      float yActualCounter, uint32_t ySpeed);
uint8_t b1pressed();
uint8_t b2pressed();

//General Setup
void setup();
uint32_t EEPROMInit();

//akustischer Alarm
void sing(volatileVariables *_volatileStorage);
void buzz(long frequency, long length);

#endif /* HEADER_H_ */
