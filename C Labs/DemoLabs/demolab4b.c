/*
Ricky Smith
Ch04 Demo Lab 2
Input a single character then print the character
*/

#include <stdio.h>

int main(void)

{
    int userInput = 0;

    printf("Enter a character: ");

    userInput = getc(stdin);

    printf("Your character was: ");
    putc(userInput, stdout);
    printf("\n");

    return 0;
}