#include "header.h"

unsigned char bcd_to_decimal(unsigned char d)
{
    return ((d & 0x0F) + (((d & 0xF0) >> 4) * 10));
}

unsigned char decimal_to_bcd(unsigned char d)
{
    return (((d / 10) << 4) & 0xF0) | ((d % 10) & 0x0F);
}

void getTime(unsigned char *original_p3, unsigned char *p2, unsigned char *p1,
             short *p0, short hour_format)
{
    unsigned char p3_array[6] = { 0, 0, 0, 0, 0 };
    unsigned char p2_array[6] = { 0, 0, 0, 0, 0 };
    int i;
    *p1 = DS3231_Read(secondREG);
    *p1 = bcd_to_decimal(*p1);

    for (i = 0; i < 6; i++)
    {
        p2_array[i] = DS3231_Read(minuteREG);
    }

    if ((p2_array[0] == p2_array[1]) == (p2_array[2] == p2_array[3])
            == (p2_array[4] == p2_array[5]))
    {
        *p2 = bcd_to_decimal(p2_array[0]);
    }

    for (i = 0; i < 6; i++)
    {
        p3_array[i] = (0x3F & DS3231_Read(hourREG));
    }

    if ((p3_array[0] == p3_array[1]) == (p3_array[2] == p3_array[3])
            == (p3_array[4] == p3_array[5]))
    {
        *original_p3 = bcd_to_decimal(p3_array[0]);
    }
}

void setTime(unsigned char hSet, unsigned char mSet, unsigned char sSet,
             short am_pm_state, short hour_format)
{
    unsigned char tmp = 0;
    DS3231_Write(secondREG, (decimal_to_bcd(sSet)));
    DS3231_Write(minuteREG, (decimal_to_bcd(mSet)));
    switch (hour_format)
    {
    case 1:
    {
        switch (am_pm_state)
        {
        case 1:
        {
            tmp = 0x60;
            break;
        }
        default:
        {
            tmp = 0x40;
            break;
        }
        }
        DS3231_Write(hourREG, ((tmp | (0x1F & (decimal_to_bcd(hSet))))));
        break;
    }
    default:
    {
        DS3231_Write(hourREG, (0x3F & (decimal_to_bcd(hSet))));
        break;
    }
    }
}
