/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////// CAPSTONE LAB I.3.A-1 ///////////////////////////////////////////
////////////////////////////////////////////////// "Advanced String Theory" /////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// The requirement for this lab is to define all of the EnglishFunctions.h functions as declared.
// The comment blocks for each function should clearly indicate what the requirements are for the function.
// There are a variety of appropriate solutions for many of these functions.
// Unit Test Code v1.c has been written to test all of the functions both individually and as a whole.
// This header definition file includes the instructor solution for the header functions.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/*
* FUNCTION:   int is_it_alphabet(signed char inputChar);
*
* ARGUMENTS:  inputChar is a single signed character that represents a single character
*                 that is tested as an alphabet letter.
*
* RETURNS:	  1 if inputChar is an alphabet character
*             0 if inputChar is not an alphabet character
*
* NOTES:      This function should not care if inputChar is uppercase or lowercase
*             The return value represents a boolean response without using a 'bool' data type
*             The letters a through z and A through Z represent "alphabet letters" for
*                 the purposes of this assignment.
*/

#include <stdio.h>
#include <string.h>

int is_it_alphabet(signed char inputChar) //************* PASSED *******************
{
	int returnValue;  //declared returnValue as a variable

	if ((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122))  //checks to see if inputChar is an alphabet character
	{
		returnValue = 1;  //returns value of 1 if above is true (inputChar is alphabet)
	}
	else
	{
		returnValue = 0;  //returns value of 0 if above is false (inputChar is NOT alphabet)
	}
	return returnValue;		//You will want to change this;  *****changed to return the returnValue variable******
}


/*
* FUNCTION:   int remove_non_letters(char * sentenceString);
*
* ARGUMENTS:  senteceString is expected to be a pointer to a null-terminated string
*
* RETURNS:	  Number of characters that were removed
*             -1 if sentenceString is NULL
*
* NOTES:      The execution of this function must utilize is_it_alphabet() to determine
*                 whether or not a given char is an alphabet letter or not.
*             In addition to removing non-alphabet letters, this function will also remove any
*                 "blank space".
*             Most importantly, sentenceString will be null-terminated before the function returns
*/
int remove_non_letters(char * sentenceString)
{
	if (!sentenceString)
	{
		return -1;
	}
	//Declaring variables
	int length = strlen(sentenceString);
	int test;
	int count = 0;
	int y = 0;
	char newString[255] = { 0 };

	if (sentenceString == "")
	{
		return -1;	// null error
	}

	for (int i = 0; i < length; i++)
	{
		test = is_it_alphabet(sentenceString[i]);	// test if alphabetical with prev function

		if (test == 1)	 //IS alphabet
		{
			newString[y] = sentenceString[i];  //takes alphabetical chars from sentenceString[i] & puts into newString[y] place
			y++;
		}
		else	//is NOT alphabet
		{
			count++;	// increase count of non-alpha removed
		}

	}

	int end = strlen(newString);	// find end of string for null term
	strcpy(sentenceString, newString);  //copies newString into sentenceString
	sentenceString[end] = 0;
	return count;

}
/*//////  My Original Code before borrowing from someone else's code  //////
{
	int count = 0;
	int is_it_alphabet();
	
	if (sentenceString)
	{
		size_t bufferLength = 0;  //local variable declaration
		int i = 0;  //local variable declaration
			
		bufferLength = strlen(sentenceString);  //Calculate lenght of input buffer
		
		for (i = 0; i < bufferLength; i++)  //iterates through entire buffer
		{ 
			if(//uses is_it_alphabet to determing whether or not a given char is an alphabet letter
			
							//is_it_alphabet == ;
				count++;  //increments the number of non-alphabet characters removed
			
		}
	}
	else
		{
			return -1;  //returns -1 if sentenceString is NULL
		}
	

	return count; // You'll want to change this  ****changed to return value of count****
}
*/

/*
* FUNCTION:   int reverse_string(char * inputString, char * outputBuff, int inputPosition);
*
* ARGUMENTS:  inputString is expected to be a pointer to a null-terminated string
*             outputBuff is expected to be a pointer to a char array which will store the reversed string from inputString
*             inputPosition is the element of inputString that reverse_string() should reverse
*
* RETURNS:	  Number of characters that were reversed
*             -1 if either inputString or outputBuff is NULL
*             -2 if inputPosition is unrealistic
*                 Examples:
*                     inputPosition is negative
*                     inputPosition is out of the array's scope
*
* NOTES:      This function can be done either itterativly or recursively. Skip over null-terminated input validation!
*
*
*			  Recursive:
*                 1. Reverse inputString[inputPosition] into outputBuff[]
*                 2. Call reverse_string() to reverse the next inputString[] position
*                 3. Count and return the total number of characters that were reversed from inputString[]
*                        into outputBuff[]
*             outputBuff is treated as the same length as inputString.  If outputBuff is longer, it
*                 will still be treated the same length as inputString.  Ideally, outputBuff and inputString
*                 are the exact same length.
*             Most importantly, outputBuff will be null-terminated before the function returns
*
*			 Itterative:
*				  1. Do input checks and return errors if needed
*				  2. LOOP: Reverse inputString[inputLength - i - 1] into outputBuff
*				  3. Count and return the total number of characters that were reversed from inputString[]
*
*				  Ensuring you start at the end of inputString and itterate until you have reached the
*				  inputPosition is very important.
*					EXAMPLE:
*					someArray[] = "Hello World"
*					inputPosition = 3
*					outputBuff = dlroW ol"
*
*/
int reverse_string(char * inputString, char * outputBuff, int inputPosition)
{
		if (!inputString || !outputBuff)  //checks for NULL on inputString and outputBuff
		{
			return -1;
		}
		//else if (inputPosition < 0 || inputPosition > (sizeof(inputString)))  //checks if inputPosition is unrealistic
		else if (inputPosition < 0 || inputPosition >= (strlen(inputString)))
		{
			return -2;
		}

		int total = strlen(inputString); //borrowed code
		int current = 0;  //borrowed code

		//for (int i = 0; i < inputPosition; i++)  //runs calculation loop to count removed characters
		for (int x = total; x > inputPosition-1; x--)  // borrowed code; loop through length of string
		{
			if (inputString[x] != '\0')  //borrowed code;  run IF if inputstring index number is NOT \0
			{
				outputBuff[current] = inputString[x];  //borrowed code;    builds string in reverse
				current++;
			}
			//if (inputString[i] >= 65 && inputString[i] <= 122)
			//{
				//tempChar = inputString[i];
				//inputString[i] = outputBuff[i];
				//outputBuff[i] = tempChar;
				//count--;
			//}
		}
	
	
	return current;		//You will want to change this  ****return value set to current****
}


/*
* FUNCTION:   int clear_a_buffer(char * fullBuff, int buffSize);
*
* ARGUMENTS:  fullBuff is expected to be a pointer to a char array
*             buffSize represents the dimension of fullBuff[]
*
* RETURNS:	  0 on success
*             -1 if fullBuff is NULL
*             -2 if buffSize is unrealistic
*                 Examples:
*                     buffSize is zero
*                     buffSize is negative
*
* NOTES:      This function 'zeroizes' all of the elements of fullBuff[buffSize]
*             fullBuff does not necessarily need to be a null-terminated string since the array's
*                 dimension is passed in as an argument (for safety)
*/
int clear_a_buffer(char * fullBuff, int buffSize)
{
	if (!fullBuff)  //checks for NULL on fullBuff
	{
		return -1;
	}
	//if (buffSize < 0 || buffSize > (sizeof(fullBuff)))  //checks if inputPosition is unrealistic
	if (buffSize <= 0)  //check is if buffSize is negative
	{
		return -2;
	}
	
	for (int y = 0; y < buffSize; y++)
	{
		fullBuff[y] = 0;  //zeroizes all elements of fullBuff[buffSize]
	}
		return 0;  //You will want to change this  ****returns value of 0****
	 
}