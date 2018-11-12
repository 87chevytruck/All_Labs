#include <stdio.h>

int main(void)
{
    int age = 34;
    float money = 1.01;
    double moneyExact = 1.012345678912;
    char firstInitial = 'R';

    printf("my age is %d \n", age);
    printf("my money is %f \n", money);
    printf("my exact money %.15f \n", moneyExact);
    printf("my firstInitial is %c \n", firstInitial);

    printf("the size of age is %d \n", sizeof(age));
    printf("the size of money is %d \n", sizeof(money));
    printf("the size of moneyExact is %d \n", sizeof(moneyExact));
    printf("the size of firstInitial is %d \n", sizeof(firstInitial));

    return 0;
    
}