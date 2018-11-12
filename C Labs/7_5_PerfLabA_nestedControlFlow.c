/*
Ricky Smith
18 July 2018

PERFORMANCE LAB(a) 7.5
NESTED CONTROL FLOW

Print all the even or odd numbers from 0 to 100.
Prompt the user for input to indicate odds or evens.
Loop from 0 to 100 and print all indicated numbers.
Use and IF statement to check if even or odd.

BONUS: Ask the user to continue with a DO-WHILE loop

* write a version with the counting loop written as a FOR loop, and a WHILE loop version.

*/

#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 0;

	//prompt user for even or odd
	printf("Do you want odd or even numbers?  (type 1 for odd or 2 for even)\n");
	
	//scan for input and make it 'y'
	scanf("%d", &y);

	/*
	
	//starts and runs loop only while x <= 100 and x is >= 0
	while (x <= 100 && x >= 0)
	{
		if ((x % 2) == 0 && y == 2) //x % 2 = 0 means x is even
		{
			printf("%d\n", x);
		}
		else if ((x % 2) != 0 && y == 1) //x % 2 = 1 means x is odd
		{
			printf("%d\n", x);
		}
		x++; //increases x by 1
	}

	*/

	//starts and runs loop only for when x <= 100 and x is >= 0; up to x <= 100; increment x up by 1
	for (x <= 100 && x >= 0; x <= 100; x++)
	{
		if ((x % 2) == 0 && y == 2) //x % 2 = 0 means x is even
		{
			printf("%d\n", x);
		}
		else if ((x % 2) != 0 && y == 1) //x % 2 = 1 means x is odd
		{
			printf("%d\n", x);
		}
		
	}

	while (1); //used to keep display on screen
	return 0;
}