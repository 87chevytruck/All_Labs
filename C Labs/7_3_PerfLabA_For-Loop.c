/*
Ricky Smith
17 July 2018


PERFORMANCE LAB(a) 7.3
FOR LOOP: OCCUPANDI TEMPORIS

Following demo lab 1 for 7.3, you should have identified your past code/programs where a for loop would have been more economical. Well NOW is your chance. Create a C file where your previous code is commented out and directly underneath, you implement a for loop.

*/

#include <stdio.h>

int main(void)
{
	int num1 = 8;

	for (num1 = 2; num1 < 16; num1++)
	{
		printf("New Number is:  %d\n", num1 + 1);
	}

	while (1);
	return 0;
}

