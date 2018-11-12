/*
Ricky Smith
Lab4A

Input a single character then print the next sequential character
Use getchar() and putchar()
*/

#include <stdio.h>

int main(void)

{
    int userInput = 0;

    printf("Enter a character: ");

    userInput = getchar();

    printf("Your character is: ");
    putchar(userInput + 1);
    printf("\n");

    return 0;
}