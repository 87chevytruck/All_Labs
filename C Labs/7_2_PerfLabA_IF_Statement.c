/*
Ricky Smith
17 July 2018

PERFORMANCE LAB(a) 7.2
IF STATEMENT

Initialize a char array to zero.
Safely store a user-input string in the char array.
Safely print the string IF the following conditions are both true:
The first element greater than or equal to decimal value 32.
The first element is less than decimal value 126.

NOTE: decimal values 32-126 represent printable ASCII characters

*/

#include <stdio.h>

int main()
{
	char charArray[256] = { 0 };

	printf("Type a word: \n ");           // Ask user for input
	scanf("%255s", &charArray);         // Prompt input, limit to 255

										// Check first element using index 0
	if ((charArray[0] >= 32) && (charArray[0] <= 126))
	{
		printf("%s", charArray);
	}

	while (1);
	return 0;

}