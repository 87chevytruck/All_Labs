/*
Ricky Smith
30 July 2018

Ch11 Line by Line:  Your Song

*/

#include <stdio.h>

int main(void)

{
	FILE * myFile_ptr = fopen("yourSong.txt", "r"); // Opens a read-only file
	char tempBuff[256] = { 0 };	// Temporary buffer to store read lines
	char * tempReturnValue = tempBuff; // Holds fgets() return value
	if (myFile_ptr != NULL) 	// Verify fopen() succeeded… 
	{
		while (tempReturnValue) // Continue reading until return value is NULL
		{
			tempReturnValue = fgets(tempBuff, 256, myFile_ptr);
			if (tempReturnValue) 	// If EOF hasn’t been reached…
			{
				puts(tempBuff);	// …print the buffer
			}
		}
		fclose(myFile_ptr); // Always fclose anything you fopen
	}
	else
	{
		return -1; // goes here…]
	}

	while (1);
			return 0;
}