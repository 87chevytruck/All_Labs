/*
Ricky Smith
17 July 2018

PERFORMANCE LAB(d) 7.2
SWITCH STATEMENT

Write a program that will evaluate a simple math formula.
Input the formula with two integers separated by an arithmetic operator from one line.
	Example: 1 + 1, (-8) - 3, 2 * (-7), (-15) / (-4)
Use a switch statement to print the correct value using the operators as cases.
Set the default condition to an error.
Ensure any division provides a double answer with a precision of two decimal places.

	NOTE : Scan the arithmetic operator as a char
*/

#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

int printMenu(void);

int main(void)
{
	int number1 = 0;
	int number2 = 0;
	char opsign = 0;

	//int menuSelection = 3;
	printf("Input a simple math problem (i.e., 4+3, 4-3, 4*3, or 4/3)\n");
	_flushall();
	

	do
	{

		scanf("%d%c%d", &number1, &opsign, &number2);
		switch (opsign)
		{
		case '+':
			printf("\n\n%d + %d = %d\n", number1, number2, number1 + number2);
			break;

		case '-':
			printf("\n\n%d - %d = %d\n", number1, number2, number1 - number2);
			break;

		case '*':
			printf("\n\n%d * %d = %d\n", number1, number2, number1 * number2);
			break;

		case '/':
			printf("\n\n%d / %d = %.2lf\n", number1, number2, (double)number1 / number2);
			break;

		default:
			printf("Learn to follow directions!");
			break;
		}
	} while (opsign != 0);

	return 0;
}
