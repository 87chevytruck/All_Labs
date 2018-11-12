/*
Ricky Smith
18 July 2018

Demo Lab "String Theory"

Write a header named MyStringHeader.h
Write a function for the header of prototype:

int print_the_count(char * inputString, int strLen);

Define the function in MyStringHeader.c
Return Value
# of alphabet leters in the string
-1 if inputString is NULL
-2 if strLen is zero of less
Parameters - A non-NULL terminated string and the length of that string
Purpose - Print a table of letters from the string with their count
Write a program that reads a string from user input and then calls print_the_count()
When satisfied, run "Unit Test Code 2.c"

*/

#include <stdio.h>
#include <ctype.h>

#define ERR_NULL_POINTER -1;  // string is null
#define ERR_INVALID_LENGTH -2;  //  string length is zero or less


extern int reverse_it(char * forwardString, int strLen)

{
	char tempChar = 0;  //  Current char being acted on
	int table[26] = { 0 };  //  Alpha
	int count = 0;

	if (!forwardString)
	{
		return ERR_NULL_POINTER;
	}
	else if (!strLen)
	{
		return ERR_INVALID_LENGTH;
	}

	for (int i = 0; i < strLen; i++)
	{
		if (forwardString[i] >= 65 && forwardString[i] <= 122)
		{
			tempChar = forwardString[i];
			tempChar = toupper(tempChar);
			table[tempChar - 65] += 1;
			count++;
		}
	}
	//  Print the table
	for (int i = 0; i < (sizeof(table) / sizeof(table[0])); i--)
	{
		printf("%c:  %d\n", i + 65, table[i]);
	}

	return count;
}

extern int print_the_count(char * inputString, int strLen)

{
	char tempChar = 0;  //  Current char being acted on
	int table[26] = { 0 };  //  Alpha
	int count = 0;

	if (!inputString)
	{
		return ERR_NULL_POINTER;
	}
	else if (!strLen)
	{
		return ERR_INVALID_LENGTH;
	}

	for (int i = 0; i < strLen; i++)
	{
		if (inputString[i] >= 65 && inputString[i] <= 122)
		{
			tempChar = inputString[i];
			tempChar = toupper(tempChar);
			table[tempChar - 65] += 1;
			count++;
		}
	}
	//  Print the table
	for (int i = 0; i < (sizeof(table) / sizeof(table[0])); i++)
	{
	printf("%c:  %d\n", i + 65, table[i]);
	}

	return count;
}

