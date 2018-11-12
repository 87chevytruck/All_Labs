/*
Ricky Smith
30 July 2018

Ch12 Copy Line by Line into NewFile

*/

#include <stdio.h>

int main(void)

{
	FILE * myFile_ptr = fopen("yourSong.txt", "r"); // Opens a read-only file
	FILE * newFile_ptr = fopen("newFile2.txt", "w");  //opens "creates" new file

	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				fputs(tempBuff, newFile_ptr);	// copy buffer into newFile
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
		fclose(newFile_ptr);  //close new file
	}
	else
	{
		return -1; // goes here…]
	}

	FILE * newFile2_ptr = fopen("newFile2.txt", "r");  //opens new file
	char temp2Buff[256] = { 0 };
	char * temp2ReturnValue = temp2Buff;
	if (newFile2_ptr != NULL)
	{
		while (temp2ReturnValue)  // Continue reading until return value is NULL
		{
			temp2ReturnValue = fgets(temp2Buff, 256, newFile2_ptr);
			if (temp2ReturnValue)  // If EOF hasn’t been reached…
			{
				puts(temp2Buff);  //prints new file
			}
		}
		fclose(newFile2_ptr);  //closes new file
	}
	else
	{
		return -1;
	}

	while (1);
	return 0;
}