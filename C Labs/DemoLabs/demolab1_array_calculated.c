#include <stdio.h>

int main(void)
{
    
    int myIntArray [10] = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    float myFloatArray [5] = {1, 2, 3, 4, 5};
    char myCharArray [256] = {0};

    printf("%d \n", myIntArray[2]);
    printf("%f \n", myFloatArray[2]);
    printf("%c \n\n", myCharArray[2]);

    myIntArray [0] = (0 + 1) * 10;
    myIntArray [1] = (1 + 1) * 10;
    myIntArray [2] = (2 + 1) * 10;
    myIntArray [3] = (3 + 1) * 10;
    myIntArray [4] = (4 + 1) * 10;
    myIntArray [5] = (5 + 1) * 10;
    myIntArray [6] = (6 + 1) * 10;
    myIntArray [7] = (7 + 1) * 10;
    myIntArray [8] = (8 + 1) * 10;
    myIntArray [9] = (9 + 1) * 10;    

    myFloatArray [0] = myFloatArray [0] * 1.1;
    myFloatArray [1] = myFloatArray [1] * 1.1;
    myFloatArray [2] = myFloatArray [2] * 1.1;
    myFloatArray [3] = myFloatArray [3] * 1.1;
    myFloatArray [4] = myFloatArray [4] * 1.1;

    myCharArray [0] = 'S';
    myCharArray [1] = 'M';
    myCharArray [2] = 'I';
    myCharArray [3] = 'T';
    myCharArray [4] = 'H';

    printf("%d \n", myIntArray[2]);
    printf("%f \n", myFloatArray[2]);
    printf("%c \n\n", myCharArray[2]);
    printf("my last name is %s \n", myCharArray);

    return 0;
    
}    