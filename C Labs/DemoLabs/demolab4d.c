/*
Ricky Smith
Ch04 Demo Lab 2

String I/O
Read a string from stdout and then write that string to stdout:
*/

#include <stdio.h>

int main(void)

{
    char userInput [4];

    printf("Enter a string: ");

    fgets(userInput, sizeof(userInput), stdin);

    printf("Your string was: ");
    fputs(userInput, stdout);
    printf("\n");

    return 0;
}