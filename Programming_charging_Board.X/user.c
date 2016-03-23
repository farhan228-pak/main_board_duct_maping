

#include <xc.h>
#include "mcc_generated_files/pin_manager.h"
#include <stdbool.h>
#include "user.h"
#include "mcc_generated_files/spi.h"
void Gyro_read_function(void)
{
 //uint8_t SPI_send[10];
uint8_t SPI_rec[10];
uint8_t string[10];
int i=0,j;
    CS_flash_SetLow();
        SPI_Exchange8bit(GYRO_ZOUT_H);
        SPI_rec[4] = SPI_Exchange8bit(0x00);
        SPI_Exchange8bit(GYRO_ZOUT_L);
        SPI_rec[5] = SPI_Exchange8bit(0x00);
        CS_flash_SetHigh();
        NOP();
        NOP();
        NOP();
        CS_flash_SetLow();
        SPI_Exchange8bit(GYRO_XOUT_H);
        SPI_rec[0] = SPI_Exchange8bit(0x00);
        SPI_Exchange8bit(GYRO_XOUT_L);
        SPI_rec[1] = SPI_Exchange8bit(0x00);
        CS_flash_SetHigh();
        NOP();
        NOP();
        NOP();
        CS_flash_SetLow();
        SPI_Exchange8bit(GYRO_YOUT_H);
        SPI_rec[2] = SPI_Exchange8bit(0x00);
        SPI_Exchange8bit(GYRO_YOUT_L);
        SPI_rec[3] = SPI_Exchange8bit(0x00);
}
