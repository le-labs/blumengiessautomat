#include "header.h"

/////////////////////////////////////////////////////////////////////////
// Functions for Display
void display_mainMenu(int Ycounter)
{
    if (Ycounter == 0)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    if (Ycounter == WateringAmounts)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == WateringInterval)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == InfluenceHumidity)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == InfluenceTemperature)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == InfluenceExposure)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == BleedHoses)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == PumpCalibration)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == TimeSetUp)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_blue, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == Demo)
    {
        CFAF128128B0145T_text(1, 25, "Wassermengen Pflanzen",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 35, "Giessintervall",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 45, "Einfluss Feuchtigkeit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 55, "Einfluss Temperatur",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 65, "Einfluss Belichtung",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 80, "Ent-/Belueften",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 90, "Kalibrierung Pumpe",
                              CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 100, "Uhrzeit", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(1, 110, "Testlauf", CFAF128128B0145T_color_red,
                              CFAF128128B0145T_color_blue, 1, 1);
    }
}


void display_timeSetUp(int Xcounter, nonVolatileVariables *_EEPROMStorage, volatileVariables *_volatileStorage)
{
    char strBuffer[30];                 // for sprintf()

    if (Xcounter == 1)
    {
        _volatileStorage->actual_h = joystickY(1, 23, 0, _volatileStorage->actual_h,
                                             13);
        sprintf(strBuffer, " %02i :", (int) _volatileStorage->actual_h);
        CFAF128128B0145T_text(10, 20, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, " %02i", (int) _volatileStorage->actual_min);
        CFAF128128B0145T_text(60, 20, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Xcounter == 2)
    {
        _volatileStorage->actual_min = joystickY(1, 59, 0,
                                               _volatileStorage->actual_min, 13);
        sprintf(strBuffer, " %02i :", (int) _volatileStorage->actual_h);
        CFAF128128B0145T_text(10, 20, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, " %02i", (int) _volatileStorage->actual_min);
        CFAF128128B0145T_text(60, 20, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
    }

}

void display_pumpCalibration(int b1counter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()
    int calibrationTime = 0;
    if (b1counter == 1)
    {
        CFAF128128B0145T_text(10, 30,
                              "Messbecher",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 40,
                              "(mind. 100 ml)",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 50,
                              "unter MV1 halten",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 60, " ", CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 70, "Bereit?",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 80, "Button 1 druecken",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (b1counter == 2)
    {
        CFAF128128B0145T_text(10, 30, "Messvorgang laeuft! ",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 50, "Sobald 100ml",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 60, "im Gefaess sind",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 70, "Button 1 druecken.",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        mv1On();
        pumpOn();
        while (b1counter == 2 && !b1_pressed)
        {
            calibrationTime++;
            SysCtlDelay(12000);
        }
        _EEPROMStorage->ticksFor100ml = calibrationTime;
    }
    else if (b1counter == 3)
    {
        sprintf(strBuffer, "%05i", (int) _EEPROMStorage->ticksFor100ml);
        CFAF128128B0145T_text(10, 30, "Messvorgang",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 40, "erfolgreich! ",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 60, "Ticks fuer 100ml:",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 70, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 90, "Zurueck mit",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        CFAF128128B0145T_text(10, 100, "Button 2.",
                              CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        pumpMvOff();
    }
}

void display_wateringAmounts(int Ycounter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()
    _EEPROMStorage->waterAmount[Ycounter - 1] = joystickX(1,
            9999, 0, _EEPROMStorage->waterAmount[Ycounter - 1], 400);
    if (Ycounter == 1)
    {
        sprintf(strBuffer, "Pflanze 1: %04i ml",
                (int) _EEPROMStorage->waterAmount[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %04i ml",
                (int) _EEPROMStorage->waterAmount[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %04i ml",
                (int) _EEPROMStorage->waterAmount[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %04i ml",
                (int) _EEPROMStorage->waterAmount[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 2)
    {
        sprintf(strBuffer, "Pflanze 1: %04i ml",
                (int) _EEPROMStorage->waterAmount[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %04i ml",
                (int) _EEPROMStorage->waterAmount[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %04i ml",
                (int) _EEPROMStorage->waterAmount[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %04i ml",
                (int) _EEPROMStorage->waterAmount[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 3)
    {
        sprintf(strBuffer, "Pflanze 1: %04i ml",
                (int) _EEPROMStorage->waterAmount[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %04i ml",
                (int) _EEPROMStorage->waterAmount[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %04i ml",
                (int) _EEPROMStorage->waterAmount[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %04i ml",
                (int) _EEPROMStorage->waterAmount[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 4)
    {
        sprintf(strBuffer, "Pflanze 1: %04i ml",
                (int) _EEPROMStorage->waterAmount[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %04i ml",
                (int) _EEPROMStorage->waterAmount[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %04i ml",
                (int) _EEPROMStorage->waterAmount[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %04i ml",
                (int) _EEPROMStorage->waterAmount[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
    }
}

void display_wateringInterval(int Ycounter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()
    _EEPROMStorage->remainingTimeWatering[0] =
            _EEPROMStorage->waterInterval[0];
    _EEPROMStorage->remainingTimeWatering[1] =
            _EEPROMStorage->waterInterval[1];
    _EEPROMStorage->remainingTimeWatering[2] =
            _EEPROMStorage->waterInterval[2];
    _EEPROMStorage->remainingTimeWatering[3] =
            _EEPROMStorage->waterInterval[3];

    _EEPROMStorage->waterInterval[Ycounter - 1] = joystickX(1,
            200, 1, _EEPROMStorage->waterInterval[Ycounter - 1], 100);
    if (Ycounter == 1)
    {
        sprintf(strBuffer, "Pflanze 1: %03i h",
                (int) _EEPROMStorage->waterInterval[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %03i h",
                (int) _EEPROMStorage->waterInterval[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %03i h",
                (int) _EEPROMStorage->waterInterval[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %03i h",
                (int) _EEPROMStorage->waterInterval[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 2)
    {
        sprintf(strBuffer, "Pflanze 1: %03i h",
                (int) _EEPROMStorage->waterInterval[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %03i h",
                (int) _EEPROMStorage->waterInterval[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %03i h",
                (int) _EEPROMStorage->waterInterval[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %03i h",
                (int) _EEPROMStorage->waterInterval[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 3)
    {
        sprintf(strBuffer, "Pflanze 1: %03i h",
                (int) _EEPROMStorage->waterInterval[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %03i h",
                (int) _EEPROMStorage->waterInterval[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %03i h",
                (int) _EEPROMStorage->waterInterval[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %03i h",
                (int) _EEPROMStorage->waterInterval[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
    }
    else if (Ycounter == 4)
    {
        sprintf(strBuffer, "Pflanze 1: %03i h",
                (int) _EEPROMStorage->waterInterval[0]);
        CFAF128128B0145T_text(10, 30, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 2: %03i h",
                (int) _EEPROMStorage->waterInterval[1]);
        CFAF128128B0145T_text(10, 40, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 3: %03i h",
                (int) _EEPROMStorage->waterInterval[2]);
        CFAF128128B0145T_text(10, 50, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_black, 1, 1);
        sprintf(strBuffer, "Pflanze 4: %03i h",
                (int) _EEPROMStorage->waterInterval[3]);
        CFAF128128B0145T_text(10, 60, strBuffer, CFAF128128B0145T_color_white,
                              CFAF128128B0145T_color_blue, 1, 1);
    }
}

void display_InfluenceHumidity(int Xcounter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()

    int optspeed=100;
    int optmax=4090;
    int optmin=1000;
    float optdelta=10.0;

    int WMspeed=100;
    int WMmax=100;
    int WMmin=0;
    float WMdelta=0.01;

     if (Xcounter == 1)
     {
         _EEPROMStorage->humidityOpt[0] = joystickY(optdelta, optmax, optmin, _EEPROMStorage->humidityOpt[0], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 2)
     {
         _EEPROMStorage->humidityAWA[0] = joystickY(WMdelta, WMmax, WMmin, _EEPROMStorage->humidityAWA[0], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 3)
     {
         _EEPROMStorage->humidityOpt[1] = joystickY(optdelta, optmax, optmin, _EEPROMStorage->humidityOpt[1], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 4)
     {
         _EEPROMStorage->humidityAWA[1] = joystickY(WMdelta, WMmax, WMmin, _EEPROMStorage->humidityAWA[1], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 5)
     {
         _EEPROMStorage->humidityOpt[2] = joystickY(optdelta, optmax, optmin, _EEPROMStorage->humidityOpt[2], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 6)
     {
         _EEPROMStorage->humidityAWA[2] = joystickY(WMdelta, WMmax, WMmin, _EEPROMStorage->humidityAWA[2], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 7)
     {
         _EEPROMStorage->humidityOpt[3] = joystickY(optdelta, optmax, optmin, _EEPROMStorage->humidityOpt[3], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 8)
     {
         _EEPROMStorage->humidityAWA[3] = joystickY(WMdelta, WMmax, WMmin, _EEPROMStorage->humidityAWA[3], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->humidityOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->humidityAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
     }
}

void display_InfluenceTemperature(int Xcounter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()

    int optspeed=100;
    int optmax=40;
    int optmin=0;
    float optdelta=1.0;

    int WMspeed=100;
    int WMmax=500;
    int WMmin=0;
    float WMdelta=0.1;

     if (Xcounter == 1)
     {
         _EEPROMStorage->temperatureOpt[0] = joystickY(optdelta, optmax, optmin, _EEPROMStorage->temperatureOpt[0], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 2)
     {
         _EEPROMStorage->temperatureAWA[0] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->temperatureAWA[0], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 3)
     {
         _EEPROMStorage->temperatureOpt[1] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->temperatureOpt[1], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 4)
     {
         _EEPROMStorage->temperatureAWA[1] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->temperatureAWA[1], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 5)
     {
         _EEPROMStorage->temperatureOpt[2] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->temperatureOpt[2], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 6)
     {
         _EEPROMStorage->temperatureAWA[2] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->temperatureAWA[2], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 7)
     {
         _EEPROMStorage->temperatureOpt[3] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->temperatureOpt[3], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 8)
     {
         _EEPROMStorage->temperatureAWA[3] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->temperatureAWA[3], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->temperatureOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%.1f", (float) _EEPROMStorage->temperatureAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
     }
}
void display_InfluenceExposure(int Xcounter, nonVolatileVariables *_EEPROMStorage)
{
    char strBuffer[30];                 // for sprintf()

    int optspeed=100;
    int optmax=1000;
    int optmin=0;
    float optdelta=10.0;

    int WMspeed=1000;
    int WMmax=100;
    int WMmin=-100;
    float WMdelta=0.01;

     if (Xcounter == 1)
     {
         _EEPROMStorage->illuminanceOpt[0] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->illuminanceOpt[0], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 2)
     {
         _EEPROMStorage->illuminanceAWA[0] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->illuminanceAWA[0], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 3)
     {
         _EEPROMStorage->illuminanceOpt[1] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->illuminanceOpt[1], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 4)
     {
         _EEPROMStorage->illuminanceAWA[1] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->illuminanceAWA[1], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 5)
     {
         _EEPROMStorage->illuminanceOpt[2] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->illuminanceOpt[2], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 6)
     {
         _EEPROMStorage->illuminanceAWA[2] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->illuminanceAWA[2], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 7)
     {
         _EEPROMStorage->illuminanceOpt[3] = joystickY(optdelta,optmax, optmin, _EEPROMStorage->illuminanceOpt[3], optspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
     }
     else if (Xcounter == 8)
     {
         _EEPROMStorage->illuminanceAWA[3] = joystickY(WMdelta,WMmax, WMmin, _EEPROMStorage->illuminanceAWA[3], WMspeed);

         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[0]);
         CFAF128128B0145T_text(40, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[1]);
         CFAF128128B0145T_text(40, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[2]);
         CFAF128128B0145T_text(40, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%04i", (int) _EEPROMStorage->illuminanceOpt[3]);
         CFAF128128B0145T_text(40, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);

         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[0]);
         CFAF128128B0145T_text(80, 50, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[1]);
         CFAF128128B0145T_text(80, 60, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[2]);
         CFAF128128B0145T_text(80, 70, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_black, 1, 1);
         sprintf(strBuffer, "%02.2f", (float) _EEPROMStorage->illuminanceAWA[3]);
         CFAF128128B0145T_text(80, 80, strBuffer, CFAF128128B0145T_color_white,
                               CFAF128128B0145T_color_blue, 1, 1);
     }
}
