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
int is_it_alphabet(signed char inputChar)
{
	int returnValue;  //declares variable

	if ((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) //uses ASCII numbers to filter out a - z and A - Z
	{
		returnValue = 1; //sets returnValue to 1 if inputChar is a letter
	}
	else
	{
		returnValue = 0; //sets returnValue to 0 if inputChar is NOT a letter
	}

	return returnValue;		//returns value of returnValue
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
	if (!sentenceString)  //checks for null
	{
		return -1;  //returns -1 if determined null
	}
	//Declaring variables
	int length = strlen(sentenceString);  //stores the string length of "sentenceString" as variable ' length ', used in For loop to follow
	int test;  //variable used to store a test string after the is_it_alphabet function is ran on sentenceString[i]
	int count = 0;
	int y = 0;
	char newString[255] = { 0 };  //declared and zeroized for use later in the IF(test == 1)
	if (sentenceString == "")
	{
		return -1;  // null error
	}
	for (int i = 0; i < length; i++)
	{
		test = is_it_alphabet(sentenceString[i]);   // calls on function ' is_it_alphabet ' and tests it against ' sentenceString[i] '
		if (test == 1)   //IS alphabet
		{
			newString[y] = sentenceString[i];  //takes alphabetical chars from sentenceString[i] & puts into newString[y]; non-alphabet continues to 'else'
			y++;  //itterates up
		}
		else    //is NOT alphabet
		{
			count++;    // increase count of non-alpha removed, used to "skip" non-alpha so that they are not placed into the newString
		}
	}
	int end = strlen(newString);    // find end of string for null term
	strcpy(sentenceString, newString);  //copies newString into sentenceString
	sentenceString[end] = 0;
	return count; //returns value of count
}


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
	if (!inputString || !outputBuff) //checks for null
	{
		return -1;  //returns -1 if null
	}
	else if (inputPosition < 0 || inputPosition >= (strlen(inputString)))  //checks that inputPosition is realistic
	{
		return -2;  //returns -2 if unrealistic number
	}

	int total = strlen(inputString);  //calculates string lenght of inputString, assigns to variable total
	int current = 0;  //declares and zeroises variable ' current '

	for (int i = total; i > inputPosition - 1; i--) //starts for loop, setting variable i to total, runs as long as i is greater the inputPosition - 1, then itterates down (reverse)
	{
		if (inputString[i] != '\0')  //run below statement if the index number is not nul-term, runs only on indexes with data
		{
			outputBuff[current] = inputString[i];  //assigns the data in the inputString index value to the new outputBuff index (current) value
			current++;  //continues until IF is no longer met
		}
	}

	return current;		//returns the value of current
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
	if (!fullBuff) //if not fullBuff (null)
	{
		return -1;
	}
	if (buffSize <= 0) //if buffSize is positive or negative (unrealistic)
	{
		return -2;
	}

	for (int i = 0; i < buffSize; i++) //run loop while fullBuff[i] is i < buffSize
	{
		fullBuff[i] = 0;  //zeros the fullBuff in all index locations of " i "
	}

	return 0;		//returns value of 0 for success
}