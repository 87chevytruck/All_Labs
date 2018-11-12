/*
Ricky Smith
19 July 2018
Ch08
Demo Lab: Recursion

int fibonacci_number(int sequenceNumber);

Purpose
Define fibonacci_number() as a recursive function that returns a Fibonacci number of position "sequenceNumber"
Allow the user to choose how many numbers are calculated
Parameters
Fibonacci Sequence number position to calculate
Return Value
sequenceNumber
-1 if sequenceNumber is unrealistic
The Fibonacci Sequence:
Starts with 0 and 1 then each subsequent number is calculated by adding the two previous sequence numbers
F(n) = F(n-1) + F(n-2)

*/
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <assert.h>
#include <errno.h>

#ifdef ASSERR
#define ASSERR
#endif

int fibonacci_number(int sequenceNumber);
void error_reporting(int currentErrno);

int main(void)
{
	int i = 0;
	int numberFibonacciNumbers = 0;
	int currentFibNum = 0;
	int currentErr = 0;

	printf("How many Fibonacci numbers would you like to print? \n");
	_flushall();
	scanf("%d", &numberFibonacciNumbers);
	currentErr = errno;
	if (currentErr != 0)
	{
		error_reporting(currentErr);
	}
#ifdef ASSERR
	assert(numberFibonacciNumbers > 0);
#endif

	printf("*************************\n");
	printf("FIBONACCI SEQUENCE\N");
	printf("*************************\n");
	for (i = 0; i < numberFibonacciNumbers; i++)
	{
		currentFibNum = fibonacci_number(i);
		printf("%d\n", currentFibNum);

	}

	getchar(); getchar();
	return 0;
}

int fibonacci_number(int sequenceNumber)
{
	int returnValue;

	if (sequenceNumber < 0)
	{
		returnValue = -1;
	}
	else if (0 == sequenceNumber)
	{
		returnValue = 0;
	}
	else if (1 == sequenceNumber)
	{
		returnValue = 1;
	}
	else
	{
		returnValue = fibonacci_number(sequenceNumber - 1) + fibonacci_number(sequenceNumber - 2);
	}

	return returnValue;
}

void error_reporting(int currErrno)
{
	if (currErrno)
	{
		perror(strerror(currErrno));
	}

	return;
}