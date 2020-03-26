#include "header.h"

/////////////////////////////////////////////////////////////////////////
// Functions for Joystick
float joystickX(float xDelta, float xMax, float xMin, float xActualCounter,
                uint32_t xSpeed)
{
    if (xActualCounter > xMax)
    {
        return xMax;
    }
    if (xActualCounter < xMin)
    {
        return xMin;
    }
    if (ui32JoystickADCValues[1] < 1000)
    {
        if (xActualCounter > xMin)
        {
            xActualCounter = xActualCounter - xDelta;
            joystickWaitTime = takt / xSpeed;
            return xActualCounter;
        }
        if (xActualCounter == xMin)
        {
            joystickWaitTime = takt / xSpeed;
            return xMax;
        }
    }
    if (ui32JoystickADCValues[1] > 3000)
    {
        if (xActualCounter < xMax)
        {
            xActualCounter = xActualCounter + xDelta;
            joystickWaitTime = takt / xSpeed;
            return xActualCounter;
        }
        if (xActualCounter == xMax)
        {
            joystickWaitTime = takt / xSpeed;
            return xMin;
        }

    }
    return xActualCounter;
}

float joystickY(float yDelta, float yMax, float yMin, float yActualCounter,
                uint32_t ySpeed)
{
    if (yActualCounter > yMax)
    {
        return yMax;
    }
    if (yActualCounter < yMin)
    {
        return yMin;
    }
    if (ui32JoystickADCValues[0] > 3000)
    {

        if (yActualCounter < yMax)
        {
            yActualCounter = yActualCounter + yDelta;
            joystickWaitTime = takt / ySpeed;
            return yActualCounter;
        }
        if (yActualCounter == yMax)
        {
            joystickWaitTime = takt / ySpeed;
            return yMin;
        }
    }
    if (ui32JoystickADCValues[0] < 1000)
    {

        if (yActualCounter > yMin)
        {
            yActualCounter = yActualCounter - yDelta;
            joystickWaitTime = takt / ySpeed;
            return yActualCounter;
        }
        if (yActualCounter == yMin)
        {
            joystickWaitTime = takt / ySpeed;
            return yMax;
        }
    }
    return yActualCounter;
}

float joystickYSelect(float yDelta, float yMax, float yMin,
                      float yActualCounter, uint32_t ySpeed)
{
    if (yActualCounter > yMax)
    {
        return yMax;
    }
    if (yActualCounter < yMin)
    {
        return yMin;
    }
    if (ui32JoystickADCValues[0] > 3000)
    {
        if (yActualCounter > yMin)
        {
            yActualCounter = yActualCounter - yDelta;
            joystickWaitTime = takt / ySpeed;
            return yActualCounter;
        }
        if (yActualCounter == yMin)
        {
            joystickWaitTime = takt / ySpeed;
            return yMax;
        }

    }
    if (ui32JoystickADCValues[0] < 1000)
    {
        if (yActualCounter < yMax)
        {
            yActualCounter = yActualCounter + yDelta;
            joystickWaitTime = takt / ySpeed;
            return yActualCounter;
        }
        if (yActualCounter == yMax)
        {
            joystickWaitTime = takt / ySpeed;
            return yMin;
        }

    }
    return yActualCounter;
}
/////////////////////////////////////////////////////////////////////////
//
void getJoystickPosition(void)
{
    ADCIntClear(ADC1_BASE, 2);
    ADCSequenceDataGet(ADC1_BASE, 2, ui32JoystickADCValues);
}

// Functions for Buttons
void debounce()
{
    TimerIntClear(TIMER3_BASE, TIMER_TIMA_TIMEOUT);
    static uint8_t b1 = 0, b2 = 0;

    if (!GPIOPinRead(GPIO_PORTH_BASE, GPIO_PIN_1))
    {
        b1++;
        if (b1 == 4)
        {
            b1_pressed = 1;
        }
    }
    else
    {
        b1 = 0;
    }

    if (!GPIOPinRead(GPIO_PORTK_BASE, GPIO_PIN_6))
    {
        b2++;
        if (b2 == 4)
        {
            b2_pressed = 1;
        }
    }
    else
    {
        b2 = 0;
    }
}

uint8_t b1pressed(void)
{
    if (b1_pressed)
    {
        b1_pressed = 0;
        displayClear = 1;
        return 1;
    }
    else
    {
        return 0;
    }
}

uint8_t b2pressed(void)
{
    if (b2_pressed)
    {
        b2_pressed = 0;
        displayClear = 1;
        return 1;
    }
    else
    {
        return 0;
    }
}
