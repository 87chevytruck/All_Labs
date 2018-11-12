/*
Input a single character then print the character
*/

#include <stdio.h>

int main(void)

{
    int userInput = 0;

    printf("Enter a character: ");

    userInput = getchar();

    printf("Your character was: ");
    putchar(userInput);

    return 0;
}