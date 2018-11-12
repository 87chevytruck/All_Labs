/*
Ricky Smith
25 July 2018

Ch11 Demo Lab
Address Arithmetic

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////// DEMONSTRATION LAB I.5.A-3 ////////////////////////////////////////////
////////////////////////////////////////////////// ADDRESS ARITHMETIC ///////////////////////////////////////////////
///////////////////////////////////////////// "The Little Integer That Could" ///////////////////////////////////////
////////////////////////////////////////////////// Instructor Solution //////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// For the purposes of this lab, "natural number" is defined as:
//     A whole, positive integer greater than zero [1,2,3,4...]
// Define find_smallest_natural_number() as follows:
//     Return Value
//         int pointer to the smallest natural number found in the array at intArray_ptr
//         NULL if intArray_ptr is NULL
//         NULL if arraySize is unrealistic (less than 1)
//     Parameters -
//         intArray_ptr - Pointer to an array of integers...
//         arraySize - ...of this dimension
//     Purpose - Find the smallest natural number in the array found at intArray_ptr
//     Requirements - Only address arithmetic (AKA pointer math) is permitted to traverse the elements
//         of the int array found at intArray_ptr
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
*/


#include <stdio.h>

#define BUFF_SIZE 30

/*
* FUNCTION:   int * find_smallest_natural_number(int * intArray_ptr, int arraySize)
*
* ARGUMENTS:  intArray_ptr is an integer pointer to an integer array
*             arraySize represents the dimension of the integer array found at intArray_ptr
*
* RETURNS:	  integer pointer to the smallest natural number on success
*             NULL if intArray_ptr is NULL
*             NULL if arraySize is unrealistic (less than 1)
*
* NOTES:      This function must be defined entirely using address arithmetic (AKA pointer math)
*             No brackets [] may be used to reference data found within the array found at
*                 intArray_ptr
*/
int * find_smallest_natural_number(int * intArray_ptr, int arraySize);  //prototyped function

int main(void)
{
	int myInts[BUFF_SIZE] = { 243, 432, 5, 976 };	// Sample input
	int * smallest_ptr = NULL; // Holds the return value of the function

	smallest_ptr = find_smallest_natural_number(myInts, (int)BUFF_SIZE);  //call function find_smallest_natural_number against myInts and BUFF_SIZE (cast BUFF_SIZE to int)

	if (smallest_ptr) // If the return value is *NOT* NULL...
	{
		printf("The smallest natural number is:  %d\n", *smallest_ptr); // ...print the output...
	}
	else // ...Otherwise, the return value was NULL...
	{
		puts("There was a problem."); // ...and that means there was an error
	}

	getchar(); getchar();
	return 0;
}

/*
* FUNCTION:   int * find_smallest_natural_number(int * intArray_ptr, int arraySize)
*
* ARGUMENTS:  intArray_ptr is an integer pointer to an integer array
*             arraySize represents the dimension of the integer array found at intArray_ptr
*
* RETURNS:	  integer pointer to the smallest natural number on success
*             NULL if intArray_ptr is NULL
*             NULL if arraySize is unrealistic (less than 1)
*
* NOTES:      This function must be defined entirely using address arithmetic (AKA pointer math)
*             No brackets [] may be used to reference data found within the array found at
*                 intArray_ptr
*/
int * find_smallest_natural_number(int * intArray_ptr, int arraySize)  //define/build function to be called during MAIN
{
	int * returnValue_ptr = NULL;	// Return value; NULL by default (for safety)
	int * temp_ptr = NULL;		// Temp holder for the pointer to the current smallest natural number
	int i = 0;						// Iterating variable

	if (!intArray_ptr)				// Checks for NULL pointer (for safety)
	{
		returnValue_ptr = NULL;		// Returns NULL if the pointer is NULL
	}
	else if (arraySize < 1)			// Checks for unrealistic dimension
	{
		returnValue_ptr = NULL;		// Returns NULL if the dimension is unrealistic
	}
	else							// Otherwise... everything is good
	{
		temp_ptr = intArray_ptr; // Mirrors the start of the referenced int array using temp_ptr

		for (i = 0; i < arraySize; i++)	// Iterates through the entire referenced int array
		{
			/*
			*  First logical test.... Is the value of intArray[i] less than the current candidate?
			*  Second logical test... Is the value of intArray[i] a whole, positive integer greater than zero
			*  If both tests are TRUE...
			*/
			if (*(intArray_ptr + i) < *(temp_ptr) && *(intArray_ptr + i) > 0)
			{
				temp_ptr = (intArray_ptr + i); // Assign the address of intArray[i] as the current candidate
			}
		}
		returnValue_ptr = temp_ptr; // Assign the return value as the address to the current candidate
	}

	return returnValue_ptr;
}