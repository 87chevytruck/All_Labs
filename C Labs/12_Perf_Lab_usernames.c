/*
Ricky Smith
30 July 2018

PERFORMANCE LAB: USERNAMES

File I/O – fprintf()

“Usernames”

Prompt the user for the number of students.

Read the first, middle, and last name for each student.

Remove any newline characters from all strings.

Append each name to a “class roster” file in the following format:
For George Herbert Dubya Bush, write the following to the the file...George H. Dubya Bush has a username of ghdbush.

BUILD THOSE SAFETY CHECKS!!!!!

*/

#include <stdio.h>
#include <string.h>



int main(void)
{
	int classCount = 0;
	char first[50] = { 0 };
	char middle[50] = { 0 };
	char last[50] = { 0 };

	printf("How many students are in the class?\n");
	scanf("%d", &classCount);  //assign user input to classCount

	FILE * myFile_ptr = fopen("classRoster.txt", "a");  //opens and appends to classRoster.txt

	for (int i = 0; i <= classCount; i++)  //uses previous user input to prompt for names only for the correct number of students; does this as loop
	{

		printf("Enter student's first name:\n");
		scanf("%50s", &first);  //assigns first name
		int iterator = 0;

		while (*(first + iterator) != '\0')  //runs only while element is not null
		{
			if (*(first + iterator) == '\n')  //removes any newlines
			{
				memmove(first + iterator, first + iterator + 1, strlen(first) - iterator);
			}
			iterator++;
		}

		printf("Enter student's middle name:\n");
		scanf("%50s", &middle);  //assigns middle name
		iterator = 0;

		while (*(middle + iterator) != '\0')  //runs only while element is not null
		{
			if (*(middle + iterator) == '\n')  //removes any newlines
			{
				memmove(middle + iterator, middle + iterator + 1, strlen(middle) - iterator);
			}
			iterator++;
		}

		printf("Enter student's last name:\n");
		scanf("%50s", &last);  //assigns last name
		iterator = 0;

		while (*(last + iterator) != '\0')  //runs only while element is not null
		{
			if (*(last + iterator) == '\n')  //removes any newlines
			{
				memmove(last + iterator, last + iterator + 1, strlen(last) - iterator);
			}
			iterator++;
		}

		int position = 0;  //initializes variable to be used as index number in output string
		char outputString[256] = { 0 };  //defines and zeroizes a new output string
		outputString[position++] = toupper(first[0]);  //ensure that the first letter in the first name is capitalized
		for (int i = 1; i < strlen(first); i++)  //goes through rest of first name, starting in index 1
		{
			outputString[position++] = first[i];
		}
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = toupper(middle[0]);  //ensure that the first letter in the middle name is capitalized, only grabs first letter
		outputString[position++] = '.';  // hard sets character as needed
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = toupper(last[0]);  //ensure that the first letter in the last name is capitalized
		for (int i = 1; i < strlen(last); i++)  //goes through rest of last name, starting in index 1
		{
			outputString[position++] = last[i];
		}
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = 'h';  // hard sets character as needed
		outputString[position++] = 'a';  // hard sets character as needed
		outputString[position++] = 's';  // hard sets character as needed
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = 'a';  // hard sets character as needed
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = 'u';  // hard sets character as needed
		outputString[position++] = 's';  // hard sets character as needed
		outputString[position++] = 'e';  // hard sets character as needed
		outputString[position++] = 'r';  // hard sets character as needed
		outputString[position++] = 'n';  // hard sets character as needed
		outputString[position++] = 'a';  // hard sets character as needed
		outputString[position++] = 'm';  // hard sets character as needed
		outputString[position++] = 'e';  // hard sets character as needed
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = 'o';  // hard sets character as needed
		outputString[position++] = 'f';  // hard sets character as needed
		outputString[position++] = ' ';  // hard sets character as needed
		outputString[position++] = tolower(first[0]);  //sets first letter in first name to be lowercase for username syntax
		outputString[position++] = tolower(middle[0]);  //sets first letter in the middle name to be lowercase for username syntax
		for (int i = 0; i < strlen(last); i++)  //runs loop to use the entire last name in user name
		{
			outputString[position++] = tolower(last[i]);  //ensure all characters in last name are set to lowercase per username syntax
		}
		outputString[position++] = '\n';  //inputs a newline character so that as the while loop runs, each name/username will go on a new line

		fputs(outputString, myFile_ptr);  //outputs the outputString into the myFile_ptr (copies and "appends" it to the classRoster.txt)
	}
	fclose(myFile_ptr);  //closes the file

	getchar(); getchar();

	return 0;

}