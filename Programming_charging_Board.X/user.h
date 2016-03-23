/* 
 * File:   user.h
 * Author: SEPS
 *
 * Created on den 23 mars 2016, 10:42
 */

#ifndef USER_H
#define	USER_H

void Gyro_read_function(void);

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

#endif	/* USER_H */

