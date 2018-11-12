#include <stdio.h>

int main(void)

{
    int num1 = 45;
    float num2 = 67.234;
    double num3 = 13.45677398757;
    char char1 = 'S';

    printf("int %d to a float is %f \n", num1, (float) num1);
    printf("int %d to a char is %c \n", num1, (char) num1);
    printf("float %f to a double is %.15f \n", num2, (double) num2);
    printf("double %.15f to a float is %f \n", num3, (float) num3);
    printf("char %c to an int is %d \n", char1, (int) char1);
    printf("33 as a char is %c \n", 33);

    return 0;
    
}