/*
Ricky Smith
18 July 2018

PERFORMANCE LAB(a) 7.4
CONTINUE

Input an unsigned integer "x".
Print the first 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
Repeat this process.
Immediately stop this process when the user inputs an integer above 999.
Ignore any "divide by 0" errors using continue.
*/

#include <stdio.h>

int main(void)
{
	int x = 0;
	int y = 1;

	//Input an unsigned integer "x".
	printf("Input a number below 1000.\n");
	scanf("%d", &x);

	//Immediately stop this process when the user inputs an integer above 999.
	if (x > 999)
	{
		printf("Learn to follow directions.  Enter a number less than 1000.");
		while (1); //used to keep result displayed on screen
		return 0;
	}

	/*
	Print the first 20 positive integers that x is divisible by utilizing the mod operator (not the most efficient)
Repeat this process.
*/
	for (y = 1; y <= x; y++ )
		{
			if (x == 0)
			{
				continue;
			}

			if ((x % y) == 0)
			{
				printf("%d\n", y);
			}
		}
	
	while (1); //used to keep result displayed on screen
	return 0;
}