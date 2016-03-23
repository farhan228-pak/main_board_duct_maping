/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using MPLAB(c) Code Configurator

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - v3.00
        Device            :  PIC16F1619
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.20
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

#include "mcc_generated_files/mcc.h"
#include "user.h"
#include "newfile.h"
#include <xc.h>
#include <stdlib.h>
#include <stdbool.h> 
//#include <C:\Users\SEPS\Desktop\test pic16f169\test.X\mcc_generated_files\pin_manager.h>
/*
                         Main application
 */
void main(void)
{
    int i=0,j;
    // initialize the device
    //SYSTEM_Initialize();
//PIN_MANAGER_Initialize();
//EUSART_Initialize();
//            for (j = 0; j <= 2; j++) {
//            for (i = 0; i <= 400; i++) {
//                NOP();
//            }
//            i = 0;
//            for (i = 0; i <= 400; i++) {
//                NOP();
//            }
//            i = 0;
//            for (i = 0; i <= 400; i++) {
//                NOP();
//            }
//            i = 0;
//        }
//        j = 0;
        
        
SYSTEM_Initialize();
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();
const uint8_t SPI_prog[10]={page_prog,0x00,0x00,0x00,'F','A','R','H','A','N'};
const uint8_t SPI_send[10]={Read_Data,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
//const uint8_t SPI_send[10]={Read_UN_ID,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00};
uint8_t SPI_rec[10];
//uint8_t string[10];

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
//LED_D10_SetDigitalOutput();
//LED_D10_SetHigh();
//LED_D2_small_SetLow();
//LED_D9_SetLow();
ICSP_clock_SetDigitalOutput();
IO_RA0_SetDigitalInput();
CS_flash_SetDigitalOutput();
CS_flash_SetHigh();
int i=0,j;
    while (1) {
        ICSP_clock_SetLow();
        if(i<1){
        for(i=0;i<=3;i++)
        {
        CS_flash_SetLow();
        NOP();
       SPI_Exchange8bit(write_EN);
        NOP();
       CS_flash_SetHigh();
        NOP();
     // __delay_us(10);
        CS_flash_SetLow();
         SPI_Exchange8bitBuffer(&SPI_prog[0], 10, &SPI_rec[0]);

        CS_flash_SetHigh();
        i++;
        }
        }
        NOP();
        
 __delay_us(1);
 ICSP_clock_SetHigh();
        CS_flash_SetLow();
       // SPI_send[]={Read_Data,0x00,0x00,0x00,0x00,0x00,0x00};
        SPI_Exchange8bitBuffer(&SPI_send[0], 10, &SPI_rec[0]);
        
         CS_flash_SetHigh();       
        //sprintf(string, "%x", SPI_rec[0]); // sting convertion
        printf("first byte =");
        //printf(&string); //USART display
         printf(&SPI_rec[4]);
        //printf("\n\r");
        
        //sprintf(string, "%x", SPI_rec[1]); // sting convertion
       // printf("Memory Type =");
       // printf(&string); //USART display
         //printf(&SPI_rec[1]);
        //printf("\n\r");
      //  sprintf(string, "%x", SPI_rec[2]); // sting convertion
       // printf("Capacity =");
       // printf(&string); //USART display
        // printf(&SPI_rec[2]);
        printf("\n\r");
        
        
//        
//        for (j = 0; j <= 2; j++) {
//            for (i = 0; i <= 4000; i++) {
//                NOP();
//            }
//            i = 0;
//            for (i = 0; i <= 4000; i++) {
//                NOP();
//            }
//            i = 0;
//            for (i = 0; i <= 4000; i++) {
//                NOP();
//            }
//            i = 0;
//        }
//        j = 0;
   
}

}
/**
 End of File
*/
