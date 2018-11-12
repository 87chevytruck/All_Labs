////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////// Performance Lab 8-1 /////////////////////////////
///////////////////////////////////// "Healthy Substitutions" //////////////////////
//////////////////////////////////// HARD STUDENT TEMPLATE ///////////////////////////
////////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <string.h>
#define ERR_NULL_POINTER -1		                // Error:  Pointer passed was NULL
#define ERR_NONE_FOUND 0		                // Error:  Character not found
#define ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
#define ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable


// Create your prototypes here
int replace_character(char * string, const char findThisChar, const char replaceItWithThis);  //my prototype function declared
int clearInput();    // I included an awesome function used to clear your input buffer

int main(void)
{
	/* FUNCTION INPUT ARRAYS
	---These are included because we have not learned about pointers yet
	*/
	char beforeString1[] = { "If debugging is the process of removing software bugs, then programming must be the process of putting them in.  -Edsger Dijkstra" }; // No newlines
	char * beforeStringArray[] = { beforeString1 };

	// TODO: Create your main variables
	char findThisChar = 0;
	char replaceItWitahThis = 0;
	char tempResults = 0;

	// TODO: Create your program output, user instructions, user input etc
	printf("Enter a character from a - Z that you would like to replace.\n");
	scanf("%c", &findThisChar);

	printf("Enter a character from a - Z that you would like to replace %c with.\n", findThisChar);
	clearInput();
	scanf("%c", &replaceItWithThis);



	// TODO: Implement replace_char function call here
	tempResults = replace_character(beforeStringArray[0], findThisChar, replaceItWithThis);

	// TODO: Check for error return, handle it
	if (tempResults > 0)
	{
		printf("\n\n\nThe new string is: \n");
		printf("%s\n", beforeStringArray[0]);
		printf("There were %d instances of %c replaced with %c.\n", tempResults, findThisChar, replaceItWithThis);
	}
	else if (tempResults == ERR_NULL_POINTER)
	{
		printf("The string was empty");
	}
	else if (tempResults == ERR_NONE_FOUND)
	{
		printf("There were no instances of that character");
	}
	else if (tempResults == ERR_FIND_EQUALS_REPLACE)
	{
		printf("The character to replace was the same as the replace character");
	}
	else
	{
		printf("One of the characters entered were not printable");
	}

	while (1);
	return 0;
}

/*
* FUNCTION:   int replace_char(char * buffer, char findChar, char replaceChar)
*
* ARGUMENTS:  -buffer is a pointer to a null-terminated string
*              The string is passed by reference and modified in place
*              -findChar is a char to be found in the string
*              -replaceChar is the char to replace the findChar
*
* RETURNS:	   Number of characers replaced
*             ERR_NULL_POINTER if buffer == NULL
*             ERR_NONE_FOUND if no newlines are found
*             ERR_FIND_EQUALS_REPLACE -2              // Error:  To replace and replace are equal to each other
*             ERR_NON_PRINTABLE_CHARACTER -3          // Error:  One of the characters is not printable
*
* NOTES:      This function replaces instances of a userinputted character with another user inputted char
*/

// This is an awesome function and useful if you need to clear the input buffer
int clearInput()
{
	while (getchar() != '\n');
}

// TODO: Create your function here
int replace_character(char * string, const char findThisChar, const char replaceItWithThis)
{
	int count = 0;  //number of characters removed

	if (string)
	{
		size_t bufferLength = 0;
		int i = 0;

		bufferLength = strlen(string);
		for (i = 0; i < bufferLength; i++)
		{
			if (*string == findThisChar)
			{
				count++;
				*string = replaceItWithThis;
			}
			string++;
		}
	}
	else
	{
		return ERR_NULL_POINTER;
	}

	if (count)
	{
		return count;
	}
	else
	{
		return ERR_NONE_FOUND;
	}
}