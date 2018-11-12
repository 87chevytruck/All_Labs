/****************************************
 * Declare and zerioze a char array with sufficient dimension to store your favorite word and the nul character.
 * Assign your favorite word to the leading elements of the array.
 * Ensure your string is null-terminated by manually setting the last element to 0
 * *************************************/

#include <stdio.h>

int main(void)

{
    char myFavWord [5] = {0};
    myFavWord [0] = 'B';
    myFavWord [1] = 'o';
    myFavWord [2] = 's';
    myFavWord [3] = 's';
    myFavWord [4] = 0;

    printf("my favorite word is %s \n", myFavWord);

    return 0;

}
