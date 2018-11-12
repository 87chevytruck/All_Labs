/*
Ricky Smith

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
    //uint32_t num3 = 0;
    //uint32_t num2 = 0;
    uint32_t num2 = 0;
    uint32_t inputMask = 1;

    //Prompt and then assign original number
    printf("Input a positive number:  \n");
    scanf("%u", &originalNum);

    uint32_t num1 = ((sizeof(originalNum)*8)-1);

    //Prompt and assign bit to flip
    printf("Which bit position do you want to flip? (0 through %u) \n", num1);
    scanf("%u", &inputBit);

    //Creating bit mask from user input bit
    inputMask = (inputMask << inputBit);

    printf("the inputMask is:  %u \n", inputMask);

    //num3 = originalNum & inputMask;

    num2 = originalNum ^ inputMask;

    //printf("Bitwise AND is:  %u \n", num3);

    printf("Bitwise XOR is:  %u \n", num2);


    return 0;
}