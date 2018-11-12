
#include <stdio.h>

#define BUFF_SIZE ((int)1024)

int count_this_letter(char * string_ptr, char countThis, int * howMany_ptr);

int main(void)
{
	/* VARIABLE DECLARATION */
	char userString[BUFF_SIZE] = { 0 };
	char countThis = 0x0;
	int thisManyTimes = 0;
	int returnValue = 0;

	/* TAKE USER INPUT */
	puts("Enter a string:");
	_flushall();
	fgets(userString, BUFF_SIZE, stdin);
	puts("Enter a character to search for:");
	_flushall();
	countThis = getc(stdin);

	/* VERIFICATION */
	printf("\n\n\n\nSearching the folowing string...\n%s", userString);
	//	puts(userString);
	puts("...for this character:");
	putchar(countThis);
	putchar(10);

	/* FIND THE CHARACTER */
	returnValue = count_this_letter(userString, countThis, &thisManyTimes);

	if (!userString)
	{
		puts("The user string is NULL");
	}
	else if (!thisManyTimes)
	{
		puts("The search character count is zero (0)");
	}
	else
	{
		printf("The original string was:\n%s", userString);
		//		puts(userString);
		//		printf("The search character was:\n%c", countThis);
		//		putchar(countThis);
		//		putchar(10);
		//		printf("The search character was found at memory address:\n%p", countThis_ptr);
		printf("The search character %c was found %d times.\n", countThis, thisManyTimes);
		printf("That data was found at memory address %p\n", &thisManyTimes);
	}
	printf("The function's return value was: %d\n", returnValue);

	getchar(); getchar();
	while (1);
	return 0;
}

int count_this_letter(char * string_ptr, char countThis, int * howMany_ptr)
{
	int returnValue = 0;				//declare and initialize variable

	if (string_ptr == NULL)			//checks string_ptr for NULL
	{
		return -1;  //returns -1 if NULL
	}							
	else if (howMany_ptr == NULL)  //checks howMany_pter for NULL
	{
		return -2;  //returns -2 if NULL
	}
	else if (countThis == '\0')  //checks countThis for NULL character '\0'
	{
		return -3;  //returns -3 if NULL character '\0' is found
	}
	else  //if no errors above are found, runs below code
	{
		int i = 0;  //assigns variable i to be zero
		while (*(string_ptr + i))  //starts while loop using pointer value of string_ptr + i, where i acts as index number
		{
			if (*(string_ptr + i) == countThis)  //checks to see if the value found at string_ptr + i is equal to countThis, if so, runs below code block
			{
				*howMany_ptr = *howMany_ptr + 1;  //assigns the the value of howMany_ptr + 1 (as in the next index number) to the howMany_ptr (previous index; i.e. 3 becomes 2)
			}
			i++;  //itterates through the while loop
		}
	}

	return returnValue;  //returns value of retrunValue

}