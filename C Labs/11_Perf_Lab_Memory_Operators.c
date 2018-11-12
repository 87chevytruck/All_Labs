/*
Ricky Smith
25 July 2018

Ch11 Performance Lab 
Memory Operators
*/

#include <stdio.h>

int main(void)
{
	int userInput;  //declares userInput
	int tempValue;  //declares tempValue
	int *input_ptr;  //declares input_ptr as a pointer

	printf("input an integer\n");  //prompts user for input
	scanf("%d", &userInput);  //scans and assigns user input to memory location of userInput

	input_ptr = &userInput;  //assigns value to input_ptr by pointing to memory location for userInput
	tempValue = *input_ptr;  //assigns value to tempValue by pointing to the value of input_ptr


	// Prints Variables and their Values //
	printf("\n\nuserInput is %d\n", userInput);
	printf("tempvalue is %d\n", tempValue);
	printf("input_ptr is %d\n", *input_ptr);

	// Prints memory location of values //
	printf("\n\nMemory location for userInput is 0x%x\n", &userInput);
	printf("Memory location for tempvalue is 0x%x\n", &tempValue);
	printf("Memory location for input_ptr is 0x%x\n", &input_ptr);

	while (1);
	return 0;
}