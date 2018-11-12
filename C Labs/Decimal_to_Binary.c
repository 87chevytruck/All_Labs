/*
Decimal to Binary Conversions
Ricky Smith
16 July 2018
*/

#include <stdio.h>
#include <math.h>
#include <inttypes.h>

int main(void)
{
    int originalNum = 0;

    printf("enter a positive number below 32768 \n");
    scanf("%d", originalNum);

    int bit16;
    int bit15;
    int bit14;
    int bit13;
    int bit12;
    int bit11;
    int bit10;
    int bit9;
    int bit8;
    int bit7;
    int bit6;
    int bit5;
    int bit4;
    int bit3;
    int bit2;
    int bit1;

    bit16 = (originalNum %65536) / 32768;
    bit15 = (originalNum %32768) / 16384;
    bit14 = (originalNum %16384) / 8192;
    bit13 = (originalNum %8192) / 4096;
    bit12 = (originalNum %4096) / 2048;
    bit11 = (originalNum %2048) / 1024;
    bit10 = (originalNum %1024) / 512;
    bit9 = (originalNum %512) / 256;
    bit8 = (originalNum %256) / 128;
    bit7 = (originalNum %128) / 64;
    bit6 = (originalNum %64) / 32;
    bit5 = (originalNum %32) / 16;
    bit4 = (originalNum %16) / 8;
    bit3 = (originalNum %8) / 4;
    bit2 = (originalNum %4) / 2;
    bit1 = (originalNum %2) / 1;

    printf("originalNum in binary is:  \t%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d \n", bit16, bit15, bit14, bit13, bit12, bit11, bit10, bit9, bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);


    return 0;
}    