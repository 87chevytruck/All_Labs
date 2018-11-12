/*
Ricky Smith
17 July 2018

PERFORMANCE LAB(c) 7.2
ELSE - IF STATEMENT
SWAP THE LARGEST NUMBER

Initialize ONLY three unsigned int variables to 0.
Safely scan user input into the variable #1 and #2 utilizing a single line.
Using a single ELSE - IF statement :
If variable #1 is equal to variable #2, print an ERROR.
Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.
Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE - IF statement.
*/

#include <stdio.h>
#include <inttypes.h>

int main(void)
{
	//Initialize ONLY three unsigned int variables to 0.
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;

	//Prompt and Safely scan user input into the variable #1 and #2 utilizing a single line.
	printf("Enter two numbers separated by one space (i.e., 2 8)\n");
	scanf("%d %d", &num1, &num2);

	/*
	Using a single ELSE - IF statement :
If variable #1 is equal to variable #2, print an ERROR.
Otherwise, exchange the value of the largest variable with variable #3 while preserving the other value.

*/
	if (num1 == num2)
	{
		printf("ERROR:  numbers inputted match\n");
	}
	else if (num1 > num2)
	{
		num3 = num1;
	}
	else
	{
		num3 = num2;
	}

	/*
	Print the values of all three variables if the SUM of the three variables is greater than 2 regardless of the previous ELSE - IF statement.
	*/
	if ((num1 + num2 + num3) > 2)
	{
		printf("Num1 = %d\nNum2 = %d\nNum3 = %d\n", num1, num2, num3);
	}
	else (printf("Num1 + Num2 + Num3 is not greater than 2\n"));
	

	while (1);
	return 0;
}
