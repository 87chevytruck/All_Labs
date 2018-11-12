/*  Ricky Smith
    Lab 4D Part 1

    Formatted Input (strings)

    Read a first, middle and last name as input into separate char arrays
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for a nul-terminator
    Specify a ("\t") as a delimitating character
    Print the full name, separating each string with a tab and newline ("\t\n")
*/

#include <stdio.h>

int main(void)

{
    //declared and zeroized
    char first [15] = {0};
    char middle [15] = {0};
    char last [15] = {0};
    
    //scanning for input
    scanf("%15s\t%15s\t%15s", &first, &middle, &last);

    //printing output with new line for each word, and tab  in front of each word
    printf("The full name is: \n\t%s\n\t%s\n\t%s\n", first, middle, last);

    return 0;

}
