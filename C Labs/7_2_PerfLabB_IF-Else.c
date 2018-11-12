/*
Ricky Smith
17 July 2018

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////// DEMONSTRATION LAB I.2.A-2 ////////////////////////////
////////////////////////////////////// Even It Out ///////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////
PERFORMANCE LAB(b) 7.2
IF - ELSE STATEMENT

Initialize a signed int to 0.
Input a number from the user and store it in the signed int.
Determine if the number is negative or positive utilizing a bitwise operator.
Utilizing an IF - ELSE statement :
INDICATE if the number is negative
Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative
Print the binary
/////////////////////////////////////////////////////////////////////////////////////*/



#include <stdio.h>

int main(void)
{
	int userInputNumber = 0;  //Initialize a signed int to 0.
	int bit8;
	int bit7;
	int bit6;
	int bit5;
	int bit4;
	int bit3;
	int bit2;
	int bit1;

	printf("Input a number under 32:  \n");
	//_flushall();
	scanf("%d", &userInputNumber);  //Input a number from the user and store it in the signed int.

	if (userInputNumber & (1 << 31)) //Determine if the number is negative or positive utilizing a bitwise operator.
	{
				
		//INDICATE if the number is negative
		printf("The number is negative. \n");
	}
	else
	{
		//Otherwise, print the original value in binary, and use a bitwise operation to flip one bit to make it negative

		
		bit8 = (userInputNumber % 256) / 128;
		bit7 = (userInputNumber % 128) / 64;
		bit6 = (userInputNumber % 64) / 32;
		bit5 = (userInputNumber % 32) / 16;
		bit4 = (userInputNumber % 16) / 8;
		bit3 = (userInputNumber % 8) / 4;
		bit2 = (userInputNumber % 4) / 2;
		bit1 = (userInputNumber % 2) / 1;

		printf("The original value in binary is:  \t%d%d%d%d%d%d%d%d \n", bit8, bit7, bit6, bit5, bit4, bit3, bit2, bit1);
	
		userInputNumber = ~userInputNumber + 1;

		printf("The new number is:  %d", userInputNumber);

	}

	while (1);
	return 0;
}