/* 
 * File:   BBB_I2C.h
 * Author: cagdas
 *
 * Created on July 26, 2013, 5:01 PM
 */

#ifndef BBB_I2C_H
#define	BBB_I2C_H

#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <linux/i2c.h>
#include <linux/i2c-dev.h>
#include <sys/ioctl.h>
#include <fcntl.h>
#include <unistd.h>

class BBB_I2C {
public:
    BBB_I2C();
    BBB_I2C(const BBB_I2C& orig);
    virtual ~BBB_I2C();
    
    void writeBit(char DEV_ADD, char DATA_REGADD, char value, int bitNum, int bus);
    void writeByte(char DEV_ADD, char DATA_REGADD, char value, int bus);
    void writeByteBuffer(char DEV_ADD, char DATA_REGADD, uint8_t *value, uint8_t length, int bus);
    void writeByteArduino(char DEV_ADD, int8_t value, int bus);
    void writeByteBufferArduino(char DEV_ADD, uint8_t *value, uint8_t buff_len, int bus);
    uint8_t readBit(char DEV_ADD, char DATA_REGADD, uint8_t bitNum, int bus);
    int8_t readByte(char DEV_ADD, char DATA_REGADD, int bus);
    void readByteBuffer(char DEV_ADD, char DATA_REGADD, int bus, uint8_t *data, uint8_t lenght);
    int16_t readWord(char DEV_ADD, uint8_t MSB, uint8_t LSB, int bus);

private:

};

#endif	/* BBB_I2C_H */

