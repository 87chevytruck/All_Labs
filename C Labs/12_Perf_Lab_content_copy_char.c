/*
Ricky Smith
30 July 2018

Performane Lab
Ch12 Content Copy Char
*/

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	FILE * myFile_ptr = fopen("Mighty_Morphin_lyrics.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("newFile.txt", "w");  //opens newFile as write

	char readFromFile = 0; // Store char-by-char input from myFile_ptr
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded
	{
		while (readFromFile != EOF) // Continue reading until the end of file
		{
			readFromFile = getc(myFile_ptr); 	// Read one character
			putc(readFromFile, newFile_ptr);  //copies "prints" the old file into the new file		
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(newFile_ptr);  //close new file
	}
	else 			// Otherwise, fopen() failed
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}

	FILE * copiedFile_ptr = fopen("newFile.txt", "r");  //opens newFile as read
	char readFile = 0;

	if (copiedFile_ptr != NULL)
	{
		while (readFile != EOF)
		{
			readFile = getc(copiedFile_ptr);
			putc(readFile, stdout);  //prints new file
		}
		fclose(copiedFile_ptr);
	}
	else
	{
		puts("Error opening file!"); 	// Tell the user and...
		getchar(); getchar();
		return -1;			// Return an error value
	}
	
	getchar(); getchar();

	return 0;
}