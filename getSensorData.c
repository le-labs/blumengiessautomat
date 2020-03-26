#include "header.h"

void getExposure(volatileVariables *_volatileStorage)
{
    uint16_t ui16Result;        // raw value of ambient light intensity
    uint16_t ui16Exponent;
//schreibe einfach in das config register (0x01)
    ui16Result = OPT3001_Read(0x01);
//Lese aus Result Register (0x00)
    ui16Result = OPT3001_Read(0x00);
    ui16Exponent = (ui16Result >> 12) & 0x000F;
    ui16Result = ui16Result & 0x0FFF;
//convert raw readings to LUX
    switch (ui16Exponent)
    {
    case 0: //*0.015625
        ui16Result = ui16Result >> 6;
        break;
    case 1: //*0.03125
        ui16Result = ui16Result >> 5;
        break;
    case 2: //*0.0625
        ui16Result = ui16Result >> 4;
        break;
    case 3: //*0.125
        ui16Result = ui16Result >> 3;
        break;
    case 4: //*0.25
        ui16Result = ui16Result >> 2;
        break;
    case 5: //*0.5
        ui16Result = ui16Result >> 1;
        break;
    case 6:
        ui16Result = ui16Result;
        break;
    case 7: //*2
        ui16Result = ui16Result << 1;
        break;
    case 8: //*4
        ui16Result = ui16Result << 2;
        break;
    case 9: //*8
        ui16Result = ui16Result << 3;
        break;
    case 10: //*16
        ui16Result = ui16Result << 4;
        break;
    case 11: //*32
        ui16Result = ui16Result << 5;
        break;
    }
    if (ui16Result <= 0)
    {
        ui16Result = 1;
    }
    _volatileStorage->illuminance_actual = (uint32_t) ui16Result;
}

void getTemperature(volatileVariables *_volatileStorage)
{
    float t[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
    //register float t[5] = { 0.0, 0.0, 0.0, 0.0, 0.0 };
    unsigned char lowByte = 0;
    signed char highByte = 0;
    int i;
    for (i = 0; i < 5; i++)
    {
        lowByte = DS3231_Read(tempLSBREG);
        highByte = DS3231_Read(tempMSBREG);
        lowByte >>= 6;
        lowByte &= 0x03;
        t[i] = ((float) lowByte);
        t[i] *= 0.25;
        t[i] += highByte;
    }
    if (t[0] && t[1] && t[2] && t[3] && t[4])
    {
        _volatileStorage->temperature_actual = t[0];
    }
}

void getHumidity(volatileVariables *_volatileStorage)
{
    uint32_t HumidityArray[5];

    ADCIntClear(ADC0_BASE, 0);
    ADCProcessorTrigger(ADC0_BASE, 0);
    while (!ADCIntStatus(ADC0_BASE, 0, false))
    {
    }
    ADCSequenceDataGet(ADC0_BASE, 0, HumidityArray); //Sequence ändern in CH 3, CH2, CH1, CH0

    _volatileStorage->SoilHumidity[3] = HumidityArray[4];
    _volatileStorage->SoilHumidity[2] = HumidityArray[0];
    _volatileStorage->SoilHumidity[1] = HumidityArray[1];
    _volatileStorage->SoilHumidity[0] = HumidityArray[2];

    _volatileStorage->waterLevel = HumidityArray[3];
}
