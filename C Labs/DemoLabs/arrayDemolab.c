#include <stdio.h>

int main(void)
{
    
    int myIntArray [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray [5] = {1, 2, 3, 4, 5};
    char myCharArray [256] = {0};

    printf("%d \n", myIntArray[2]);
    printf("%f \n", myFloatArray[2]);
    printf("%c \n\n", myCharArray[2]);

    int i = 0;
    for (i = 0; i < 10; i++)
    {
        myIntArray [i] = (i + 1) * 10;
    }

    for (i = 0; i < 5; i++)
    {
        myFloatArray [i] = (myFloatArray [i] * 1.1);
    }

    myCharArray [0] = 'S';
    myCharArray [1] = 'M';
    myCharArray [2] = 'I';
    myCharArray [3] = 'T';
    myCharArray [4] = 'H';

    printf("%d \n", myIntArray[2]);
    printf("%f \n", myFloatArray[2]);
    printf("%c \n\n", myCharArray[2]);

    return 0;
    
}