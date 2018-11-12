#include <Windows.h>
#include <stdio.h>
#include "TestCode.h"

//***************************
//    Ricky Smith          //
//    30 Aug 2018          //
//                         //
//    C / C++ Final        //
//***************************



/////////////////////////////////////////////////////////////
// Test 1: For this task, you will receive two pointers to NULL terminated strings: 
//		   a 'sentence', and a 'word'. The objective will be to delete (in place) the first 
//		   occurrence of 'word' in the sentence. 
//
// Expected Return Values:
//		- the task is successful: should return ERROR_SUCCESS (0).
//		- provided parameters are bad: should return ERROR_INVALID_PARAMETER (87)
//		- the provided 'word' is not part of 'sentence': should return ERROR_NOT_FOUND (1168)
/////////////////////////////////////////////////////////////

int deleteWord(char* sentence, char* word)
{
	//declare and initialize status for use as return during function
	int status = ERROR_SUCCESS;

	if (!sentence)
	{
		//return invalid if sentence is NULL
		status = ERROR_INVALID_PARAMETER;
		return status;

	}
	else if (!word)
	{
		//return invalid if word is NULL
		status = ERROR_INVALID_PARAMETER;
		return status;
	}
	else
	{
		//declarations and initializations
		int i = 0, j = 0, found = 0;
		int len, removeLen;
		len = strlen(sentence);  //get and assign size of string sentence
		removeLen = strlen(word);  //get and assign size of string word

		//run for loop for total length of sentance
		for (i = 0; i < len; i++)
		{
			found = 1;  //hard set found to 1 for if statement later in loop

			//run for loop against sentence for the "length" of word
			for (j = 0; j < removeLen; j++)
			{
				//if the first index of word is never found in sentence, then word is not found in sentence
				if (sentence[i + j] != word[j])
				{
					//return not found if first index of word is not found in sentence
					status = ERROR_NOT_FOUND;
					return status;
					break;
				}
			}

			/* If word has been found then remove it by shifting characters  */
			if (found == 1)
			{
				for (j = i; j <= (len - removeLen); j++)
				{
					sentence[j] = sentence[j + removeLen];  //essentially removes the word by starting at index j and removing total "length" of word
				}
				//set status to success
				status = ERROR_SUCCESS;
				return status;
				// Terminate from loop so only first occurrence is removed
				break;
			}
		}
	}
}


/////////////////////////////////////////////////////////////
// Test 3 (part one): This task will involve allocating a buffer
//				of (sizeOfData) bytes, and reading up to that amount
//				into it from the file specified in 'filename'. Additionally,
//				the data in the file has been pseudo-encryped (poorly) with a single-
//				byte XOR, which you will be required to undo (the byte that the buffer
//				was XOR'd against will be provided in 'key'). Finally, assuming the task
//				was successful, (and all pointers are valid) the pointer to the resulting 
//				buffer should be stored in the area referenced by buffPtr.
//
// Expected Return Values:
//			- task was completed successfully: ERROR_SUCCESS (0)
//			- bad input was provided: ERROR_INVALID_PARAMETER (87)
//			- you were unable to allocate enough memory: ERROR_OUTOFMEMORY (14)
//			- you were unable to open the file: ERROR_OPEN_FAILED (110)
/////////////////////////////////////////////////////////////
int decodeFromFile(char* filename, unsigned int sizeOfData, unsigned char key, void** buffPtr)
{
	int status = ERROR_SUCCESS;
	int i = 0;
	char tempChar;

	//check for null inputs
	if (filename == NULL || sizeOfData == NULL || key == NULL || !buffPtr)
	{
		return ERROR_INVALID_PARAMETER;
	}

	//opens read only file using pointer filename, and calling it myFile_ptr
	FILE * myFile_ptr = fopen(filename, "r");
	
	//checks file is not NULL, if file is NULL, file did not open and will proceed to else statment for return of error
	if (myFile_ptr != NULL)
	{
		//allocate buffer width to be the size of sizeOfData
		char *buffer = malloc(sizeOfData);

		//check if buffer was created, if not, return error
		if (!buffer)
		{
			//closes file and returns error
			fclose(myFile_ptr);
			return ERROR_OUTOFMEMORY;
		}

		//for loop to decode buffer with key and push decoded data into buffPtr
		for (int i = 0; i < sizeOfData; i++)
		{
			tempChar = fgetc(myFile_ptr);  //grabs char and places into tempChar each time it loops
			buffer[i] = tempChar ^ key;  //decodes one char at a time
		}

		//assigns decoded buffer to buffPtr
		*buffPtr = buffer;
		
		//close previously opened file
		fclose(myFile_ptr);

		//return success
		return ERROR_SUCCESS;
	}
	else
	{
		//unable to open file, return error
		return ERROR_OPEN_FAILED;
	}

}

/////////////////////////////////////////////////////////////
// Test 3 (part two): The second part of the task; this simply requires you
//				  to appropriately free the buffer allocated in the last task
//				  (if possible).
//
// Expected Return Values:
//			- the task completed successfully: TRUE
//			- the task failed/bad input: FALSE
/////////////////////////////////////////////////////////////
BOOL freeDecodedBuffer(void* buffer)
{
	//initializes out to False
	BOOL out = FALSE;

	//checks buffer exists
	if (buffer != NULL)
	{
		free(buffer);  //clears buffer
		out = TRUE;  //sets out to True
	}

	//returns True or False
	return out;
}
