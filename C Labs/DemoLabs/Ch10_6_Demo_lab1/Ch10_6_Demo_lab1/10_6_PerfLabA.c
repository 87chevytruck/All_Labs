/*
Ricky Smith
24 July 2018

PERFORMANCE LAB A 10.6
PREPROCESSOR DIRECTIVES 10.6
Write a C program with preprocessor directives to:

Combine two string literals
Wrap those string literals in quotes
Define a constant buffer size of 64

Define an array:

Of standard buffer size
Assign the wrapped string literals to the array

Print the array
*/

#include <stdio.h>

#define STRING1(x , y) #x###y //defines STRING1 to look for 3 variables/inputs; #turns into string, ### pastes texts together including ""

#define BufferSize 64  //sets BufferSize to a constant number of 64

int main(void)
{
	char array1[BufferSize] = STRING1(Ricky, Smith);  //BufferSize is used to control size of array1; STRING1 applied against three inputs to creat one string and assigns to array1

	printf("\"%s\"", array1); //prints array1 and uses \" to add quotes to wrap the string printout in quotes

	while (1);  //keeps display up
	return 0;

}