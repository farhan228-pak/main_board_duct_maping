/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB® Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB® Code Configurator - v2.25.2
        Device            :  PIC16F1619
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 v1.34
        MPLAB             :  MPLAB X v2.35 or v3.00
 */

/*
Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

Microchip licenses to you the right to use, modify, copy and distribute
Software only when embedded on a Microchip microcontroller or digital signal
controller that is integrated into your product or third party product
(pursuant to the sublicense terms in the accompanying license agreement).

You should refer to the license agreement accompanying this Software for
additional information regarding your rights and obligations.

SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
(INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.
 */

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set LED_D9 aliases
#define LED_D9_TRIS               TRISA2
#define LED_D9_LAT                LATA2
#define LED_D9_PORT               RA2
#define LED_D9_ANS                ANSA2
#define LED_D9_SetHigh()    do { LATA2 = 1; } while(0)
#define LED_D9_SetLow()   do { LATA2 = 0; } while(0)
#define LED_D9_Toggle()   do { LATA2 = ~LATA2; } while(0)
#define LED_D9_GetValue()         RA2
#define LED_D9_SetDigitalInput()    do { TRISA2 = 1; } while(0)
#define LED_D9_SetDigitalOutput()   do { TRISA2 = 0; } while(0)

#define LED_D9_SetAnalogMode()   do { ANSA2 = 1; } while(0)
#define LED_D9_SetDigitalMode()   do { ANSA2 = 0; } while(0)
// get/set SDO aliases
#define SDO_TRIS               TRISB4
#define SDO_LAT                LATB4
#define SDO_PORT               RB4
#define SDO_ANS                ANSB4
#define SDO_SetHigh()    do { LATB4 = 1; } while(0)
#define SDO_SetLow()   do { LATB4 = 0; } while(0)
#define SDO_Toggle()   do { LATB4 = ~LATB4; } while(0)
#define SDO_GetValue()         RB4
#define SDO_SetDigitalInput()    do { TRISB4 = 1; } while(0)
#define SDO_SetDigitalOutput()   do { TRISB4 = 0; } while(0)

#define SDO_SetAnalogMode()   do { ANSB4 = 1; } while(0)
#define SDO_SetDigitalMode()   do { ANSB4 = 0; } while(0)
// get/set RX aliases
#define RX_TRIS               TRISB5
#define RX_LAT                LATB5
#define RX_PORT               RB5
#define RX_ANS                ANSB5
#define RX_SetHigh()    do { LATB5 = 1; } while(0)
#define RX_SetLow()   do { LATB5 = 0; } while(0)
#define RX_Toggle()   do { LATB5 = ~LATB5; } while(0)
#define RX_GetValue()         RB5
#define RX_SetDigitalInput()    do { TRISB5 = 1; } while(0)
#define RX_SetDigitalOutput()   do { TRISB5 = 0; } while(0)

#define RX_SetAnalogMode()   do { ANSB5 = 1; } while(0)
#define RX_SetDigitalMode()   do { ANSB5 = 0; } while(0)
// get/set SCK aliases
#define SCK_TRIS               TRISB6
#define SCK_LAT                LATB6
#define SCK_PORT               RB6
#define SCK_WPU                WPUB6
#define SCK_SetHigh()    do { LATB6 = 1; } while(0)
#define SCK_SetLow()   do { LATB6 = 0; } while(0)
#define SCK_Toggle()   do { LATB6 = ~LATB6; } while(0)
#define SCK_GetValue()         RB6
#define SCK_SetDigitalInput()    do { TRISB6 = 1; } while(0)
#define SCK_SetDigitalOutput()   do { TRISB6 = 0; } while(0)

#define SCK_SetPullup()    do { WPUB6 = 1; } while(0)
#define SCK_ResetPullup()   do { WPUB6 = 0; } while(0)
// get/set SDI aliases
#define SDI_TRIS               TRISB7
#define SDI_LAT                LATB7
#define SDI_PORT               RB7
#define SDI_WPU                WPUB7
#define SDI_SetHigh()    do { LATB7 = 1; } while(0)
#define SDI_SetLow()   do { LATB7 = 0; } while(0)
#define SDI_Toggle()   do { LATB7 = ~LATB7; } while(0)
#define SDI_GetValue()         RB7
#define SDI_SetDigitalInput()    do { TRISB7 = 1; } while(0)
#define SDI_SetDigitalOutput()   do { TRISB7 = 0; } while(0)

#define SDI_SetPullup()    do { WPUB7 = 1; } while(0)
#define SDI_ResetPullup()   do { WPUB7 = 0; } while(0)
// get/set LED_D10 aliases
#define LED_D10_TRIS               TRISC0
#define LED_D10_LAT                LATC0
#define LED_D10_PORT               RC0
#define LED_D10_ANS                ANSC0
#define LED_D10_SetHigh()    do { LATC0 = 1; } while(0)
#define LED_D10_SetLow()   do { LATC0 = 0; } while(0)
#define LED_D10_Toggle()   do { LATC0 = ~LATC0; } while(0)
#define LED_D10_GetValue()         RC0
#define LED_D10_SetDigitalInput()    do { TRISC0 = 1; } while(0)
#define LED_D10_SetDigitalOutput()   do { TRISC0 = 0; } while(0)

#define LED_D10_SetAnalogMode()   do { ANSC0 = 1; } while(0)
#define LED_D10_SetDigitalMode()   do { ANSC0 = 0; } while(0)
// get/set CS_flash aliases
#define CS_flash_TRIS               TRISC6
#define CS_flash_LAT                LATC6
#define CS_flash_PORT               RC6
#define CS_flash_ANS                ANSC6
#define CS_flash_SetHigh()    do { LATC6 = 1; } while(0)
#define CS_flash_SetLow()   do { LATC6 = 0; } while(0)
#define CS_flash_Toggle()   do { LATC6 = ~LATC6; } while(0)
#define CS_flash_GetValue()         RC6
#define CS_flash_SetDigitalInput()    do { TRISC6 = 1; } while(0)
#define CS_flash_SetDigitalOutput()   do { TRISC6 = 0; } while(0)

#define CS_flash_SetAnalogMode()   do { ANSC6 = 1; } while(0)
#define CS_flash_SetDigitalMode()   do { ANSC6 = 0; } while(0)
// get/set TX aliases
#define TX_TRIS               TRISC7
#define TX_LAT                LATC7
#define TX_PORT               RC7
#define TX_ANS                ANSC7
#define TX_SetHigh()    do { LATC7 = 1; } while(0)
#define TX_SetLow()   do { LATC7 = 0; } while(0)
#define TX_Toggle()   do { LATC7 = ~LATC7; } while(0)
#define TX_GetValue()         RC7
#define TX_SetDigitalInput()    do { TRISC7 = 1; } while(0)
#define TX_SetDigitalOutput()   do { TRISC7 = 0; } while(0)

#define TX_SetAnalogMode()   do { ANSC7 = 1; } while(0)
#define TX_SetDigitalMode()   do { ANSC7 = 0; } while(0)

// Read register for Sensor     (Adress + first bit =1))
#define TEMP_OUT_L              (0x42+0x80)// 80h is added so that the command will be interpreted as Read command 
#define WHO_AM_I              (0x75+0x80)
#define GYRO_XOUT_L              (0x44+0x80)
#define GYRO_XOUT_H              (0x43+0x80)
#define GYRO_YOUT_H             (0x45+0x80)
#define GYRO_YOUT_L             (0x46+0x80)
#define GYRO_ZOUT_H             (0x47+0x80)
#define GYRO_ZOUT_L             (0x48+0x80)

// SPI commands for memory
#define read_ID                 0x90
#define write_EN                0x06
#define page_prog               0x02
#define Read_Data               0x03
/**
 * @Param
    none
 * @Returns
    none
 * @Description
    GPIO and peripheral I/O initialization
 * @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize(void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);

#endif // PIN_MANAGER_H
/**
 End of File
 */