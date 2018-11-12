/*
Ricky Smith
Lab 3B: Strings

    Declare and zeroize a char array with a dimension of 256
    Assign your chosen pharse to the leading elements of that array
    Explicitly verify your string is nul-terminated
    Print your string

QUIZ: What is your string length?
*/

#include <stdio.h>

int main(void)

{
    //declared and zeroized
    char phrase [256] = {0};

    //assign phrase
    phrase [0] = 'P';
    phrase [1] = 'a';
    phrase [2] = 'p';
    phrase [3] = 'a';
    phrase [4] = ' ';
    phrase [5] = 'P';
    phrase [6] = 'u';
    phrase [7] = 'm';
    phrase [8] = 'p';

    //explicitly nul-terminated
    phrase [256] = 0;

    printf("%s \n", phrase);

    return 0;

    //string length is 4

}