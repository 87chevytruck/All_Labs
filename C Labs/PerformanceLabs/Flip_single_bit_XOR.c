/*
Capstone
Name:  Ricky Smith
Date:  16 July 2018

Capstone 1: Flip a single bit using XOR

    Initialize an unsigned int with an arbitrary value
    Ask the user input on which bit position to flip (0 through ((sizeof(unsigned int)*8) -1))
    Create a dynamic bit mask based on the user input "inputMask"
    XOR the original value with the inputMask and print the result

NOTE: This capstone requires a lot of logic and almost all the previously used bitwise operators.
*/

#include <stdio.h>
#include <inttypes.h>
#include <math.h>

int main(void)
{
    uint32_t originalNum = 0;
    uint32_t inputBit = 0;
    uint32_t result_1 = 0;
    uint32_t inputMask = 1;

    //Prompt and then assign original number
    printf("Input a positive number less than 15:  \n");
    scanf("%u", &originalNum);

    uint32_t temp1 = ((sizeof(originalNum)*8)-1);

    //Prompt and assign bit to flip
    printf("Which bit position do you want to flip? (0 through %u) \n", temp1);
    scanf("%u", &inputBit);

    //Creating bit mask from user input bit
    inputMask = (originalNum << inputBit);

    //test printing outcome for inputMask
    printf("the inputMask is:  %u \n", inputMask);
    
    //calculating XOR 
    result_1 = originalNum ^ inputMask;

    printf("Bitwise XOR is:  %u \n", result_1);

    //converting and printing in binary
    
    int bit8;
    int bit7;
    int bit6;
    int bit5;
    int bit4;
    int bit3;
    int bit2;
    int bit1;

    bit8 = (originalNum %256) / 128;
    bit7 = (originalNum %128) / 64;
    bit6 = (originalNum %64) / 32;
    bit5 = (originalNum %32) / 16;
    bit4 = (originalNum %16) / 8;
    bit3 = (originalNum %8) / 4;
    bit2 = (originalNum %4) / 2;
    bit1 = (originalNum %2) / 1;

    printf("originalNum in binary is:  \t%d%d%d%d%d%d%d%d \n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);

    bit8 = (inputMask %256) / 128;
    bit7 = (inputMask %128) / 64;
    bit6 = (inputMask %64) / 32;
    bit5 = (inputMask %32) / 16;
    bit4 = (inputMask %16) / 8;
    bit3 = (inputMask %8) / 4;
    bit2 = (inputMask %4) / 2;
    bit1 = (inputMask %2) / 1;

    printf("inputMask in binary is:  \t%d%d%d%d%d%d%d%d \n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);

    bit8 = (result_1 %256) / 128;
    bit7 = (result_1 %128) / 64;
    bit6 = (result_1 %64) / 32;
    bit5 = (result_1 %32) / 16;
    bit4 = (result_1 %16) / 8;
    bit3 = (result_1 %8) / 4;
    bit2 = (result_1 %4) / 2;
    bit1 = (result_1 %2) / 1;

    printf("result_1 in binary is:  \t%d%d%d%d%d%d%d%d \n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);
    
    return 0;
}