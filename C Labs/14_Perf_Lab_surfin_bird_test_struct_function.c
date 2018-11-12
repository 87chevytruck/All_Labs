#include "14_surfin_bird.h"


/*
* FUNCTION:   find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
*
* ARGUMENTS:  sentence_ptr is a char pointer to a null-terminated string to search
*             searchWord_ptr is a char pointer to a null-terminated string to find inside sentence_ptr
*             errorCode_ptr is an int pointer.  Store your error code at this memory address.
*
* RETURNS:	   char pointer to the first occurrence of the searchWord_ptr string found in the
*                 sentence_ptr string.  The char pointer should be a memory address in the
*                 sentence_ptr string and this memory address should represent the first 'index'
*                 of the searchWord_ptr string.  This memory address from the sentence_ptr string
*                 should dereference to a value equivalent to searchWord_ptr[0].
*             All other occurences should return NULL.  This includes, but is not limited to, the
*                 following:
*                     sentence_ptr is NULL
*                     searchWord_ptr is NULL
*                     errorCode_ptr is NULL
*                     the searchWord_ptr string is not found in the sentence_ptr string
*
* NOTES:      This function only utilizes address arithmetic to access information within the
*                 null-terminated char array found at both sentence_ptr and searchWord_ptr
*             Only access elements of the char array found at both sentence_ptr and searchWord_ptr
*                 using address arithmetic (AKA pointer math).  The definition of this function should
*                 be entirely devoid of the [ and ] characters.  (e.g., sentence_ptr[i] is forbidden)
*             The only guarantees for the arguments are:
*                 Any string found at sentence_ptr is null-terminated
*                 Any string found at searchWord_ptr is null-terminated
*             There is no guarantee sentence_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee searchWord_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee errorCode_ptr has an address (return NULL if it's NULL and assign the
*                 proper error code)
*             There is no guarantee the string found at sentence_ptr contains the string found at
*                 searchWord_ptr (return NULL if the string at searchWord_ptr is not found and assign the
*                 proper error code)
*             There is no guarantee the strings found at both sentence_ptr and searchWord_ptr will
*                 return a string length longer than zero (0)
*/
extern char * find_the_word(char * sentence_ptr, char * searchWord_ptr, int * errorCode_ptr)
{
	//Declare variables
	char *returnValue_ptr = NULL;
	//	char testChar1 = 0;
	//	char testChar2 = 0;

	//check null on sentence_ptr, store error codes at the errorCode_ptr
	if (!sentence_ptr)
	{
		returnValue_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_SENTENCE_POINTER;
	}
	//	check null on seachWord_ptr, store error codes at the errorCode_ptr
	else if (!searchWord_ptr)
	{
		returnValue_ptr = NULL;
		*errorCode_ptr = ERROR_NULL_SEARCH_POINTER;
	}
	//	check null on errorCode_ptr, store error codes at the errorCode_ptr
	else if (!errorCode_ptr)
	{
		returnValue_ptr = NULL;

	}
	//	check if searchWord_ptr is found in the sentence_ptr sring, store error codes at the errorCode_ptr
	else
	{
		int sentenceLength = strlen(sentence_ptr); //obtaining size of string
		int searchWordLength = strlen(searchWord_ptr);  //obtaining size of string

		if (searchWordLength > sentenceLength)  //compares two string lengths to ensure it's possible to find searchWord in the sentence
		{
			returnValue_ptr = NULL;
			*errorCode_ptr = ERROR_SEARCH_NOT_FOUND;
		}
		// find searchWord_ptr inside sentence_ptr
		else
		{
			*errorCode_ptr = ERROR_SEARCH_NOT_FOUND;

			for (int i = 0; i <= (sentenceLength - searchWordLength); i++)  //FOR loop started
			{
				//			testChar2 = *(searchWord_ptr);  //sets testChar2 to value of searchWord_ptr[0]
				//			testChar1 = *(sentence_ptr + i);  //sets testChar1 to value of sentence_ptr[i]

				if (*(searchWord_ptr) == *(sentence_ptr + i))  //checks all indexes of sentence_ptr via pointer values and finds matches for the first index of searchWord_ptr
				{
					if (searchWordLength == 1)  //if string lenght of searchWord is 1, then error
					{
						returnValue_ptr = (sentence_ptr + i);
						*errorCode_ptr = ERROR_CODE_SUCCESS;
						return returnValue_ptr;
					}
					else
					{
						for (int j = 1; j < searchWordLength; j++)  //FOR loop specifically on searchWord in the sentence string
						{
							if (*(sentence_ptr + i + j) != *(searchWord_ptr + j))  //compares pointer value of sentence_ptr to searchWord_ptr
							{
								break;
							}
							else if (j == (searchWordLength - 1))  //compares j to the string length of searchWord - 1
							{
								returnValue_ptr = (sentence_ptr + i);
								*errorCode_ptr = ERROR_CODE_SUCCESS;
								return returnValue_ptr;
							}
						}
					}

				}
			} //end FOR loop
		}
	}

	return returnValue_ptr;
}