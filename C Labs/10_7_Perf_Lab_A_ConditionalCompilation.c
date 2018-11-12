/*
Ricky Smith
24 July 2018

PERFORMANCE LAB A 10.7
CONDITONAL COMPILATION

Redefine EOF as 66 (without compiler warnings)
Use preprocessor directive(s) to:
Only compile in "release" and only compile if _INC_STDIO is defined
Prints the name of a MACRO and also print the integer value of that MACRO
Use a #else 'fall through' for ease of use and safety
Use your preprocessor directives on FOPEN_MAX, FILENAME_MAX, and EOF


*/

#include <stdio.h>

#undef EOF  //undifined EOF
#define EOF 66  //defined EOF to be 66


#define _CRT_SECURE_NO_WARNINGS 1  //defines CRT Secure No Warnings


#ifdef _INC_STDIO  //_INC_STDIO is defined in the stdio.h header file

#define PRINT_TEST(a) printf(#a " is %d\n", a)	 //prints the Macro plus it's value
#else
#endif		

int main(void)
{
	//printing Macros below
	PRINT_TEST(FOPEN_MAX);
	PRINT_TEST(FILENAME_MAX);
	PRINT_TEST(EOF);

	while (1);  //keeps display up
}
