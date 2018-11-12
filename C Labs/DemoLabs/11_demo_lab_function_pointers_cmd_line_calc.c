/*
Ricky Smith
30 July 2018

Ch11 Demo Lab - Function Pointers
"Command Line Calculator"
*/

#include <stdio.h>
#include <math.h>



double add(double firstNumber, double secondNumber);
double subtract(double firstNumber, double secondNumber);
double multiply(double firstNumber, double secondNumber);
double divide(double firstNumber, double secondNumber);


int main(void)
{

	double(*mathFun_ptr)(double x, double y);
	double num1 = 0;
	double num2 = 0;
	double returnValue = 0;
	char mathOp = 0;

	printf("Enter two integers you would like to either add, subtract, multiply, or divide.\n (e.g., 5.1 + 7.2, -1.9 - 1.3, -13.23 * 13.37, 1 / 2.3)\n");
	scanf("%lf %c %lf", &num1, &mathOp, &num2);

	if (mathOp == '+')
	{
		mathFun_ptr = &add;
	}
	else if (mathOp == '-')
	{
		mathFun_ptr = &subtract;
	}
	else if (mathOp == '*')
	{
		mathFun_ptr = &multiply;
	}
	else if (mathOp == '/')
	{
		mathFun_ptr = &divide;
	}
	else
	{
		printf("ERROR:  Invalid Input.  Please try again.\n");
		return -1;
	}

	if (mathFun_ptr)
	{
		returnValue = mathFun_ptr(num1, num2);
		printf("The result is:\t%lf\n", returnValue);

	}
	else
	{
		puts("ERROR:  Invalid Input.\n");
	}

	getchar(); 
	getchar();

	while (1);

	return 0;


}


double add(double firstNumber, double secondNumber)
{	
	return firstNumber + secondNumber;
}

double subtract(double firstNumber, double secondNumber)
{
	return firstNumber - secondNumber;
}

double multiply(double firstNumber, double secondNumber)
{
	return firstNumber * secondNumber;
}

double divide(double firstNumber, double secondNumber)
{
	return firstNumber / secondNumber;
}