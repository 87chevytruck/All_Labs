/*
Ricky Smith
31 July 2018

Ch14 Performance Lab:  Surfin Bird Test Struct

*/
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include "14_surfin_bird.h"
#include <stdio.h>

int main(void)
{
	int i = 0;
	int numTestsRun = 0;
	int numTestsPassed = 0;
	int putErrorCodeHere = DEFAULT_ERROR_CODE;
	char * tempReturnValue_ptr = NULL;
	char testChar1 = 0; // DEBUGGING
	char testChar2 = 0; // DEBUGGING

						/* TEST INPUT */
						// Three normal strings
	char testInput0[] = { "Good luck to you on this lab.\nI hope you do well." }; // Key: \n
	//struct FunctionTest test0 = { testInput0, testKey0, &putErrorCodeHere, ERROR_CODE_SUCCESS };

	char testInput1[] = { "Normal test input.  'The' is the search key." }; // Key: The
	//struct FunctionTest test1 = { testInput1, "The", (testInput1 + 21), ERROR_CODE_SUCCESS };

	char testInput2[] = { "This is also normal input.  The 'bird' is the word." }; // Key: bird
	//struct FunctionTest test2 = { testInput2, "bird", (testInput2 + 33), ERROR_CODE_SUCCESS };

					   // Two strings that have duplicate keys
	char testInput3[] = { "This string is an example of a string that has two occurrences of the word 'is'." }; // Key: is
	//struct FunctionTest test3 = { testInput3, "is", (testInput3 + 13), ERROR_CODE_SUCCESS };
	
	char testInput4[] = { "The word 'the' is very common in the English language." }; // Key: the
//	struct FunctionTest test4 = { testInput4, "the", (testInput4 + 10), ERROR_CODE_SUCCESS };

					  // Two strings that have multiple occurrences of the key
	char testInput5[] = { "Many English words are 'loan words', which is defined as 'a word that has been adopted from one language into another'." }; // Key: word
	//struct FunctionTest test5 = { testInput5, "words", (testInput5 + 29), ERROR_CODE_SUCCESS };
	
	char testInput6[] = { "The search keys don't have to be letters!  They could be any character or array of characters!  They could even be puntuation!  Maybe even non-printable characters!  Crazy, right?" }; // Key: "!  "
	//struct FunctionTest test6 = { testInput6, '!', (testInput6 + 40), ERROR_CODE_SUCCESS };																																																			   // Two NULL strings to pass as sentence_ptr
	
	//char * testInput7 = NULL; // Key: "Doesn't matter"
	//struct FunctionTest test7 = { testInput7, "Doesn't matter", testInput7, ERROR_NULL_SENTENCE_POINTER };
	
	/*
	char * testInput8 = NULL; // Key: "Don't bother"
	//struct FunctionTest test8 = { testInput8, "Don't bother", testInput8, ERROR_NULL_SENTENCE_POINTER };
	
					// Two real strings to pass alongside a NULL searchWord
	char testInput9[] = { "It's a shame to waste a perfectly good sentence." }; // Key:  NULL
	//struct FunctionTest test9 = { testInput9, NULL, testInput9, ERROR_NULL_SEARCH_POINTER };
	
	char testInput10[] = { "It's a shame to waste a perfectly good null-terminated string." }; // Key:  NULL
	//struct FunctionTest test10 = { testInput10, NULL, testInput10, ERROR_NULL_SEARCH_POINTER };
	
					// Two real strings to pass alongside a NULL errorCode
	char testInput11[] = { "At least electrons are free." }; // Key: are
	//struct FunctionTest test11 = { testInput11, "are", (testInput11 + 20), ERROR_CODE_SUCCESS };

	char testInput12[] = { "Even if they're not free, there is are a plethora of electrons freely available." }; // Key: e
	//struct FunctionTest test12 = { testInput12, 'e', (testInput12 + 3), ERROR_CODE_SUCCESS };

					 // Two strings that will pass more NULL search keys
	char testInput13[] = { "You can't find a key here!" }; // Key: NULL
	//struct FunctionTest test13 = { testInput13, NULL, testInput13, ERROR_NULL_SEARCH_POINTER };

	char testInput14[] = { "Take a picture!  It'll last longer." }; // Key: NULL
	//struct FunctionTest test14 = { testInput14, NULL, testInput14, ERROR_NULL_SEARCH_POINTER };

					// Two strings to pass long keys
	char testInput15[] = { "Now is the time for all good men to come to the aid of their country." }; // Key: "come to the aid"
	//struct FunctionTest test15 = { testInput15, "come to the aid", (testInput15 + 37), ERROR_CODE_SUCCESS };

	char testInput16[] = { "Sometimes it's hard to play the game the way it was intended to be played instead of following the game's rules as written." }; // Key: "play the game"
	//struct FunctionTest test16 = { testInput16, "play the game", (testInput16 + 24), ERROR_CODE_SUCCESS };
	
					// Edge cases that may break find_the_word()
	char testInput17[] = { "I hope you didn't find anything here!" }; // Key: '\0' (0x0)
	//struct FunctionTest test17 = { testInput17, '\0', testInput17, ERROR_NULL_SEARCH_POINTER };

	char testInput18[BUFF_SIZE] = { 0 }; // Key: "Don't do it!"
	//struct FunctionTest test18 = { testInput18, "Don't do it!", testInput18, ERROR_NULL_SENTENCE_POINTER };
	
	char testInput19[] = { "Not a long string" }; // Key: "long string as a search key"
	//struct FunctionTest test19 = { testInput19, "long string as a search key", testInput19, ERROR_SEARCH_NOT_FOUND };

	char testInput20[] = { "part" }; // Key: "partial"
	//struct FunctionTest test20 = { testInput20, "partial", testInput20, ERROR_SEARCH_NOT_FOUND };

	char testInput21[BUFF_SIZE] = { 0 }; // Key: '\0' (0x0)
	//struct FunctionTest test21 = { testInput21, '\0', testInput21, ERROR_NULL_SENTENCE_POINTER };

					 // Two strings whose keys are non printable characters
	char testInput22[] = { 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF, 0x0 }; // Key: 0x8
	//struct FunctionTest test22 = { testInput22, 0x8, (testInput22 + 8), ERROR_CODE_SUCCESS };

	char testInput23[] = { 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F, 0x1E, 0x1D, 0x1C, 0x1B, 0x1A, 0x0 }; // Key: 0x1C
	//struct FunctionTest test23 = { testInput23, 0x1C, (testInput23 + 3), ERROR_CODE_SUCCESS };

					// Two strings that include characters from the extended ASCII codes
	char testInput24[] = { '\n', 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, 0x5F, '\n', 0x7C, '$', '(', '5', ')', '$', 0x7C, '\n', 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, 0xC4, '\n', 0x0 }; // Key: 0xC4
	//struct FunctionTest test24 = { testInput24, 0xC4, (testInput24 + 18), ERROR_CODE_SUCCESS };
	//	puts(testInput24); // DEBUGGING
	
	char testInput25[] = { 0xC4, 0x5C, 0x5F, 0x2, 0x5F, 0x2F, 0xC4, 0x0 }; // Key: 0x2F
	//struct FunctionTest test25 = { testInput25, 0x1C, (testInput25 + 6), ERROR_CODE_SUCCESS };
	//	puts(testInput25); // DEBUGGING
	
	char testInput26[] = { "Sometimes keys are at the beggining of a string." }; // Key: "Sometime"
	//struct FunctionTest test26 = { testInput26, "Sometime", (testInput26 + 1), ERROR_CODE_SUCCESS };

	char testInput27[] = { "When you lose an item, you always find it in the last place you look." }; // Key: "look."
	//struct FunctionTest test27 = { testInput27, "look.", (testInput27 + 65), ERROR_CODE_SUCCESS }; 
	
	*/

	//struct FunctionTest testInputArray[] = { test0, test1, test2, test3, test4, test5, test6, test7, test8, test9, test10, test11, test12, test13, test14, test15, test16, test17, test18, test19, test20, test21, test22, test23, test24, test25, test26, test27 };

	/*
	char * testInputArray[] = { \
		testInput0, testInput1, testInput2, \
		testInput3, testInput4, testInput5, \
		testInput6, testInput7, testInput8, \
		testInput9, testInput10, testInput11, \
		testInput12, testInput13, testInput14, \
		testInput15, testInput16, testInput17, \
		testInput18, testInput19, testInput20, \
		testInput21, testInput22, testInput23, \
		testInput24, testInput25, testInput26, \
		testInput27 };    */

	// TEST SEARCH KEYS 
	char testKey0[] = { 10,0 };
	char testKey1[] = { "The" };
	char testKey2[] = { "bird" };
	char testKey3[] = { "is" };
	char testKey4[] = { "the" };
	char testKey5[] = { "word" };
	char testKey6[] = { "!  " };
	//char testKey7[] = { "Doesn't matter" };
	/*
	char testKey8[] = { "Don't bother" };
	char * testKey9 = NULL;
	char * testKey10 = NULL;
	char testKey11[] = { "are" };
	char testKey12[] = { "e" };
	char * testKey13 = NULL;
	char * testKey14 = NULL;
	char testKey15[] = { "come to the aid" };
	char testKey16[] = { "play the game" };
	char testKey17[] = { 0x0, 0x0 };
	char testKey18[] = { "Don't do it!" };
	char testKey19[] = { "long string as a search key" };
	char testKey20[] = { "partial" };
	char testKey21[1] = { 0x0 };
	char testKey22[] = { 0x8, 0x0 };
	char testKey23[] = { 0x1C, 0x0 };
	char testKey24[] = { 0xC4, 0x0 };
	char testKey25[] = { 0x2F, 0x0 };
	char testKey26[] = { "Sometime" };
	char testKey27[] = { "look." };
	char * testKeyArray[] = { \
		testKey0, testKey1, testKey2, \
		testKey3, testKey4, testKey5, \
		testKey6, testKey7, testKey8, \
		testKey9, testKey10, testKey11, \
		testKey12, testKey13, testKey14, \
		testKey15, testKey16, testKey17, \
		testKey18, testKey19, testKey20, \
		testKey21, testKey22, testKey23, \
		testKey24, testKey25, testKey26, \
		testKey27 };   */

	// TEST ERROR CODE POINTERS 
	int * errorCodePointerArray[] = { \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere };/* &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, NULL, \
		NULL, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere, &putErrorCodeHere, &putErrorCodeHere, \
		&putErrorCodeHere };*/

	// TEST RETURN VALUES 
	char * expectedReturnValueArray[] = { \
		&testInput0[29], &testInput1[21], &testInput2[33], \
		&testInput3[2], &testInput4[10], &testInput5[13], \
		&testInput6[40] };/*, testInput7, testInput8, \
		NULL, NULL, NULL, \
		NULL, NULL, NULL, \
		&testInput15[36], &testInput16[23], NULL, \
		NULL, NULL, NULL, \
		NULL, &testInput22[7], &testInput23[2], \
		&testInput24[17], &testInput25[5], &testInput26[0], \
		&testInput27[64] };*/

	// TEST ERROR CODES 
	int expectedErrorCodeArray[] = { \
		ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, \
		ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, \
		ERROR_CODE_SUCCESS }; /*ERROR_NULL_SENTENCE_POINTER, ERROR_NULL_SENTENCE_POINTER, \
		ERROR_NULL_SEARCH_POINTER, ERROR_NULL_SEARCH_POINTER, DEFAULT_ERROR_CODE, \
		DEFAULT_ERROR_CODE, ERROR_NULL_SEARCH_POINTER, ERROR_NULL_SEARCH_POINTER, \
		ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, ERROR_SEARCH_NOT_FOUND, \
		ERROR_SEARCH_NOT_FOUND, ERROR_SEARCH_NOT_FOUND, ERROR_SEARCH_NOT_FOUND, \
		ERROR_SEARCH_NOT_FOUND, ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, \
		ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, ERROR_CODE_SUCCESS, \
		ERROR_CODE_SUCCESS }*/

	struct FunctionTest test0 = { testInput0, testKey0, &putErrorCodeHere, &testInput0[29], ERROR_CODE_SUCCESS };
	struct FunctionTest test1 = { testInput1, testKey1, &putErrorCodeHere, &testInput1[21], ERROR_CODE_SUCCESS };
	struct FunctionTest test2 = { testInput2, testKey2, &putErrorCodeHere, &testInput2[33], ERROR_CODE_SUCCESS };
	struct FunctionTest test3 = { testInput3, testKey3, &putErrorCodeHere, &testInput3[2], ERROR_CODE_SUCCESS };
	struct FunctionTest test4 = { testInput4, testKey4, &putErrorCodeHere, &testInput4[10], ERROR_CODE_SUCCESS };
	struct FunctionTest test5 = { testInput5, testKey5, &putErrorCodeHere, &testInput5[29], ERROR_CODE_SUCCESS };
	struct FunctionTest test6 = { testInput6, testKey6, &putErrorCodeHere, &testInput6[40], ERROR_CODE_SUCCESS };
	//struct FunctionTest test7 = { testInput7, testKey7, &putErrorCodeHere, testInput7[0], ERROR_CODE_SUCCESS };

	struct FunctionTest testArray[] = { test0, test1, test2, test3, test4, test5, test6};


	/* CALCULATE THE NUMBER OF TESTS */
	int numTotalTests = sizeof(testArray) / sizeof(testArray[0]);
	//	printf("The length of the test array is: %d \n", sizeof(testInputArray)/sizeof(testInputArray[0])); // DEBUGGING

	/* EXECUTE THE TESTS */
	for (i = 0; i < numTotalTests; i++)
	{
		/* 0. TEST HEADER */
		printf("\n");
		printf("************\n");
		printf("* TEST #%02d *\n", i);
		printf("************\n");
		tempReturnValue_ptr = find_the_word((testArray + i)->sentence_ptr, (testArray + i)->searchWord_ptr, (testArray + i)->errorCode_ptr);
		//tempReturnValue = split_the_string((inputArray + i)->input_string_ptr, (inputArray + i)->input_delimiter);

		/* 1. TEST RETURN VALUE */
		numTestsRun++;
		printf("\tReturn Value Test:\t");
		if (tempReturnValue_ptr == ((testArray + i)->expectedReturn))
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected pointer:\t%p\n", ((testArray + i)->expectedReturn));
			printf("\t\tReceived pointer:\t%d\n", tempReturnValue_ptr);
		}

		/* 2. TEST ERROR CODE */
		numTestsRun++;
		printf("\tError Code Test:\t");
		if (putErrorCodeHere == (testArray + i)->expectedError)
		{
			puts("Pass");
			numTestsPassed++;
		}
		else
		{
			puts("FAIL!");
			printf("\t\tExpected error code:\t%d\n", (testArray + i)->expectedError);
			printf("\t\tReceived error code:\t%d\n", putErrorCodeHere);
			if (putErrorCodeHere == DEFAULT_ERROR_CODE)
			{
				puts("\t\tError code not even updated!");
			}
		}

		putErrorCodeHere = DEFAULT_ERROR_CODE; // Reset error code
	}

	if (numTestsRun)
	{
		printf("\n\n\n*******************************\n");
		printf("Out of the %d tests that ran...\n", numTestsRun);
		printf("%d tests passed.\n", numTestsPassed);
		printf("*******************************\n");
	}

	while (1);
	return 0;
}

