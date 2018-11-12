//Smith's Lab3A Code

#include <stdio.h>

int main(void)
{
    //manual class ages input using random numbers
    int ClassAges [13] = {0};
    ClassAges [0] = 26;
    ClassAges [1] = 33;
    ClassAges [2] = 22;
    ClassAges [3] = 44;
    ClassAges [4] = 29;
    ClassAges [5] = 33;
    ClassAges [6] = 28;
    ClassAges [7] = 34;
    ClassAges [8] = 45;
    ClassAges [9] = 22;
    ClassAges [10] = 37;
    ClassAges [11] = 32;
    ClassAges [12] = 25;

    //manual printing of instructor and student ages
    printf("instructor's age is %d \n", ClassAges[0]);
    printf("student's age is %d \n", ClassAges[1]);
    printf("student's age is %d \n", ClassAges[2]);
    printf("student's age is %d \n", ClassAges[3]);
    printf("student's age is %d \n", ClassAges[4]);
    printf("student's age is %d \n", ClassAges[5]);
    printf("student's age is %d \n", ClassAges[6]);
    printf("student's age is %d \n", ClassAges[7]);
    printf("student's age is %d \n", ClassAges[8]);
    printf("student's age is %d \n", ClassAges[9]);
    printf("student's age is %d \n", ClassAges[10]);
    printf("student's age is %d \n", ClassAges[11]);
    printf("student's age is %d \n\n", ClassAges[12]);

    //quote that I say a lot is "Well technically"
    char quote [] = {"Well\ntechnically\n"};

    //print of quote
    printf("%s \n", quote);

    return 0;

}