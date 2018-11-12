#include <stdio.h>
int main(void)
{
    /*************VARIABLE INITIALIZATION*************/
    /* initialization Syntax: <DATA TYPE> <VARIABLE NAME> = <INITIAL VALUE>; */
    int lowerLimit = -10;  // lowest y value for graph
    int upperLimit = 10;  // highest y value for graph
    float x = 1.0, y = 2.1;      // graphing variables
    // used to hold a person's individual initials
    char firstInitial = 'J', middleInitial = 'E', lastInitial = 'H';
    double pi = 3.14159265359;       // stores the constant "pi"
    int finalResult = 0;      // placeholder 0. to be changed later.
    
    printf("double pi is %lf \n", pi);
    printf("initials are %c%c%c \n", firstInitial, middleInitial, lastInitial);
    printf("lowerLimit is %d \n", lowerLimit);
    printf("upperLimit is %d \n", upperLimit);
    printf("final result is %d \n", finalResult);
    return 0;
}