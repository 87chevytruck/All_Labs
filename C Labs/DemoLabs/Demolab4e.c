/*  Ricky Smith
    Ch04.7 Demo Lab 1

Formatted I/O

Formatted Input (Strings)

    Read a string into a char array
    Specify a field-width to protect against buffer overflow
    Ensure the field-width leaves room for the nul-terminator
    Stop reading at the first capital letter or new line

*/

#include <stdio.h>

int main(void)
{

char charArray [] = "bobby Stopped walking";

scanf("%20[^A-Z]s", &charArray);

printf("\n%s\n", charArray);

return 0;

}