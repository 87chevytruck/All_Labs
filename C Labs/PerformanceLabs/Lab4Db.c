/*  Ricky Smith
    Lab 4D Part 2

    Formatted Input (numbers)

    Read two integers from one line
    Format the input so that the integers are separated by an asterisk (*) x*y (e.g., 2*3, 11*14)
    Reprint the two integers and result as if the answer were being read by a human
*/

#include <stdio.h>

int main(void)
{
    //declaring int
    int num1;
    int num2;
    
    //displaying prompt for input
    printf("Enter two intergers, separated by a *, to be multipled...\n");

    //scanning for two intergers
    scanf("%d%*c%d", &num1, &num2);

    //displaying the answer
    printf("The result of %d multipled by %d is %d\n", num1, num2, num1*num2);

    return 0;

}