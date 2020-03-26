#include "header.h"

void setup(long takt)
{
    SysCtlClockFreqSet(
            (SYSCTL_XTAL_25MHZ | SYSCTL_OSC_MAIN | SYSCTL_USE_PLL
                    | SYSCTL_CFG_VCO_480),
            takt);

    IntMasterDisable();
    IntMasterEnable();

//Configuration GPIO (Magnetventile, Pumpe, LED's)
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOF);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOL);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOF)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOG)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOL)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOK)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPION))
    {
    }
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_1); //Pump
    GPIOPinTypeGPIOOutput(GPIO_PORTK_BASE, GPIO_PIN_5); //LED Pump
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_2); //MV1
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_1); //LED MV1
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_3); //MV2
    GPIOPinTypeGPIOOutput(GPIO_PORTN_BASE, GPIO_PIN_0); //LED MV2
    GPIOPinTypeGPIOOutput(GPIO_PORTG_BASE, GPIO_PIN_0); //MV3
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_4); //LED MV3
    GPIOPinTypeGPIOOutput(GPIO_PORTL_BASE, GPIO_PIN_4); //MV4
    GPIOPinTypeGPIOOutput(GPIO_PORTF_BASE, GPIO_PIN_0); //LED MV4

//Reset all GPIO Outputs
    pumpMvOff();

//Configuration I2C
//I2C BoosterPack 1 (RTC)
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralReset(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOB);
    SysCtlDelay(3);

//I2C BoosterPack 2 (Light Sensor)
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C2);
    SysCtlPeripheralReset(SYSCTL_PERIPH_I2C2);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_I2C2);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPION);
    SysCtlDelay(3);

//GPIO Pin Configure I2C Booster Pack 1 (RTC)
    GPIOPinConfigure(GPIO_PB2_I2C0SCL);
    GPIOPinConfigure(GPIO_PB3_I2C0SDA);
    GPIOPinTypeI2C(GPIO_PORTB_BASE, GPIO_PIN_3);
    GPIOPinTypeI2CSCL(GPIO_PORTB_BASE, GPIO_PIN_2);

//GPIO Pin Configure I2C Booster Pack 2 (Light Sensor)
    GPIOPinConfigure(GPIO_PN4_I2C2SDA);
    GPIOPinConfigure(GPIO_PN5_I2C2SCL);
    GPIOPinTypeI2C(GPIO_PORTN_BASE, GPIO_PIN_4);
    GPIOPinTypeI2CSCL(GPIO_PORTN_BASE, GPIO_PIN_5);

// I2C Boosterpack 1 Clock configuration
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_I2C0))
    {
    }
    I2CMasterInitExpClk(I2C0_BASE, takt, true);
    SysCtlDelay(10000);

// I2C Boosterpack 2 Clock configuration
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_I2C2))
    {
    }
    I2CMasterInitExpClk(I2C2_BASE, takt, true);
    SysCtlDelay(10000);
    OPT3001_init();
// Buzzer

    SysCtlPeripheralEnable(SYSCTL_PERIPH_PWM0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOG);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_PWM0)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOG))
    {
    }

    GPIOPinConfigure(GPIO_PG1_M0PWM5);
    GPIOPinTypePWM(GPIO_PORTG_BASE, GPIO_PIN_1);
    PWMClockSet(PWM0_BASE, PWM_SYSCLK_DIV_64); // 120MHz/64 = 1.875MHz
    PWMGenConfigure(PWM0_BASE, PWM_GEN_2, PWM_GEN_MODE_UP_DOWN);
    PWMGenPeriodSet(PWM0_BASE, PWM_GEN_2, 20000);
    PWMPulseWidthSet(PWM0_BASE, PWM_OUT_5, 0);
    PWMGenEnable(PWM0_BASE, PWM_GEN_2);
    PWMOutputState(PWM0_BASE, PWM_OUT_5_BIT, true);

//Configuration ADC Humidity Sensors
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOE);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_ADC0)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOE)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOD))
    {
    }

    GPIOPinTypeADC(GPIO_PORTE_BASE,
                   GPIO_PIN_0 | GPIO_PIN_1 | GPIO_PIN_2 | GPIO_PIN_3);
    GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_7);
    ADCSequenceConfigure(ADC0_BASE, 0, ADC_TRIGGER_PROCESSOR, 0);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH0);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 1, ADC_CTL_CH1);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 2, ADC_CTL_CH2);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 3, ADC_CTL_CH3);
    ADCSequenceStepConfigure(ADC0_BASE, 0, 4,
                             ADC_CTL_CH4 | ADC_CTL_IE | ADC_CTL_END);

    ADCSequenceEnable(ADC0_BASE, 0);

// Configuration Joystick and Push Buttons
    SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC1);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOA);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOD);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOK);
    SysCtlPeripheralEnable(SYSCTL_PERIPH_GPIOH);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_ADC1)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOA)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOD)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOK)
            && !SysCtlPeripheralReady(SYSCTL_PERIPH_GPIOH))
    {
    }

//Joystick Select & Push Buttons
    GPIODirModeSet(GPIO_PORTA_BASE, GPIO_PIN_0, GPIO_DIR_MODE_IN);
    GPIOPadConfigSet(GPIO_PORTA_BASE, GPIO_PIN_0, GPIO_STRENGTH_2MA,
    GPIO_PIN_TYPE_STD_WPU);
    GPIODirModeSet(GPIO_PORTH_BASE, GPIO_PIN_1, GPIO_DIR_MODE_IN);
    GPIOPadConfigSet(GPIO_PORTH_BASE, GPIO_PIN_1, GPIO_STRENGTH_2MA,
    GPIO_PIN_TYPE_STD_WPU);
    GPIODirModeSet(GPIO_PORTK_BASE, GPIO_PIN_6, GPIO_DIR_MODE_IN);
    GPIOPadConfigSet(GPIO_PORTK_BASE, GPIO_PIN_6, GPIO_STRENGTH_2MA,
    GPIO_PIN_TYPE_STD_WPU);

//Joystick Vert / Hor
    GPIOPinTypeADC(GPIO_PORTD_BASE, GPIO_PIN_2);
    GPIOPinTypeADC(GPIO_PORTK_BASE, GPIO_PIN_1);
    ADCSequenceConfigure(ADC1_BASE, 2, ADC_TRIGGER_TIMER, 0);
    ADCSequenceStepConfigure(ADC1_BASE, 2, 0, ADC_CTL_CH17);
    ADCSequenceStepConfigure(ADC1_BASE, 2, 1,
    ADC_CTL_CH13 | ADC_CTL_IE | ADC_CTL_END);
    ADCSequenceEnable(ADC1_BASE, 2);
    ADCIntEnable(ADC1_BASE, 2);
    IntEnable(INT_ADC1SS2);

// Timer Configuration

// Initialize Timer 1 A to trigger an ADC conversion for Joystick -> getJoystickPosition();
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER1);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER1))
    {
    }
    TimerConfigure(TIMER1_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet(TIMER1_BASE, TIMER_A, takt / 100);
    TimerEnable(TIMER1_BASE, TIMER_A);
    TimerControlTrigger(TIMER1_BASE, TIMER_A, true);

//Initialize Timer 3 A to debounce the buttons
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER3);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER3))
    {
    }
    TimerConfigure(TIMER3_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet(TIMER3_BASE, TIMER_A, takt / 100);
    TimerIntEnable(TIMER3_BASE, TIMER_TIMA_TIMEOUT);
    IntEnable(INT_TIMER3A);
    TimerEnable(TIMER3_BASE, TIMER_A);


//Initialize Timer 2 A for refreshMeasurements
    SysCtlPeripheralEnable(SYSCTL_PERIPH_TIMER2);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_TIMER2))
    {
    }
    TimerConfigure(TIMER2_BASE, TIMER_CFG_PERIODIC);
    TimerLoadSet(TIMER2_BASE, TIMER_A, ((int) takt));
    TimerIntEnable(TIMER2_BASE, TIMER_TIMA_TIMEOUT);
    IntEnable(INT_TIMER2A);
    TimerEnable(TIMER2_BASE, TIMER_A);
    IntMasterEnable();

//Initialize Display
    CFAF128128B0145T_init(2, takt, 20000000);

//Enable Floating Point Unit
    FPUEnable();

//Initialize EEPROM
    SysCtlPeripheralEnable(SYSCTL_PERIPH_EEPROM0);
    while (!SysCtlPeripheralReady(SYSCTL_PERIPH_EEPROM0))
    {
    }
    EEPROMInit();
}

void DS3231_init()
{
    DS3231_Write(controlREG, 0x00);
    DS3231_Write(statusREG, 0x08);
}

unsigned char DS3231_Read(unsigned char address)
{
    unsigned char value = 0;

    I2CMasterSlaveAddrSet(I2C0_BASE, DS3231_I2C_ADDRESS, false);

    I2CMasterDataPut(I2C0_BASE, address);

    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_SEND);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C0_BASE))
    {
    }
    SysCtlDelay(100000);

    I2CMasterSlaveAddrSet(I2C0_BASE, DS3231_I2C_ADDRESS, true);

    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_SINGLE_RECEIVE);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C0_BASE))
    {
    }

    value = I2CMasterDataGet(I2C0_BASE);
    return value;
}

void DS3231_Write(unsigned char address, unsigned char value)
{
    I2CMasterSlaveAddrSet(I2C0_BASE, DS3231_I2C_ADDRESS, false);
    I2CMasterDataPut(I2C0_BASE, address);
    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_START);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C0_BASE))
    {
    }

    I2CMasterDataPut(I2C0_BASE, value);
    I2CMasterControl(I2C0_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C0_BASE))
    {
    }
}

void OPT3001_init()
{
//1. Reset all devices // General Reset Command
    I2CMasterSlaveAddrSet(I2C2_BASE, 0x00, false);
    I2CMasterDataPut(I2C2_BASE, 0b00000110);
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_SINGLE_SEND);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C2_BASE))
    {
    }
//2. Config Register
    OPT3001_Write(0x01, 0b1100111000010000);
}

uint16_t OPT3001_Read(uint16_t registernummer)
{

    uint8_t lsb;
    uint8_t msb;

// Set register address to manufacturer ID  (single send)
    I2CMasterSlaveAddrSet(I2C2_BASE, 0x44, false);
    I2CMasterDataPut(I2C2_BASE, registernummer);
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_SINGLE_SEND);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C2_BASE))
    {
    }
// Read content (2x8 bit) of selected register
    I2CMasterSlaveAddrSet(I2C2_BASE, 0x44, true);
// Receive first data byte
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_BURST_RECEIVE_START);
    SysCtlDelay(500);                           // wait 500
    while (I2CMasterBusy(I2C2_BASE))
    {
    }        // check if I2C still busy

    msb = I2CMasterDataGet(I2C2_BASE);          // first data byte (MSB)

// Receive second/last data byte
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_BURST_RECEIVE_FINISH);
    SysCtlDelay(500);                           // wait 500
    while (I2CMasterBusy(I2C2_BASE))
    {
    }        // check if I2C still busy

    lsb = I2CMasterDataGet(I2C2_BASE);

// combine 2x8 bit data into 16 bit value
    return ((msb << 8) | lsb);

}

void OPT3001_Write(uint16_t registernummer, uint16_t value)
{

    I2CMasterSlaveAddrSet(I2C2_BASE, OPT3001_I2C_ADDRESS, false);
    I2CMasterDataPut(I2C2_BASE, registernummer);             // llr reg.
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_BURST_SEND_START);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C2_BASE))
    {
    }

// Send first data byte
    I2CMasterDataPut(I2C2_BASE, (uint8_t) (value >> 8));
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_BURST_SEND_CONT);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C2_BASE))
    {
    }

// Send second/last data byte
    I2CMasterDataPut(I2C2_BASE, (uint8_t) (value & 0x00FF));
    I2CMasterControl(I2C2_BASE, I2C_MASTER_CMD_BURST_SEND_FINISH);
    SysCtlDelay(500);
    while (I2CMasterBusy(I2C2_BASE))
    {
    }
}
