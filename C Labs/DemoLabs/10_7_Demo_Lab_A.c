/*
Ricky Smith
24 July 2018

DEMO LAB 1 10.7
CONDITIONAL COMPILATION
Write a simple C program that utilizes conditional compilation

*/


#include <stdio.h>

//#define DEBUG
#ifdef _DEBUG
#define DEBUG_INT(x) printf(#x " is %d", x)
#endif /* DEBUG */
#define WAIT getchar(); getchar();
int main(void)
{
	int someNum = 42;

#ifdef _DEBUG
	DEBUG_INT(someNum);
#endif /* DEBUG */

	WAIT;
	return 0;
}