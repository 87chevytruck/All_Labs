/*
Ricky Smith
Ch04 Demo Lab 1

String I/O
Read a string from stdin and then write that string to stdout:
*/

#include <stdio.h>

int main(void)

{
    char userInput [4];

    printf("Enter a string: ");

    fgets(userInput, sizeof(userInput), stdin);

    printf("Your string was: ");
    puts(userInput);
    printf("\n");

    return 0;
}