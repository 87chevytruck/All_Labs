/*  Ricky Smith
    Ch04.7 Demo Lab 2 "Formatted I/O (scanf)"

    Formatted Input (Numbers)

    Read three ints, representing the date, from one line
    Format the input so the integers are separated by a dash (-) as <mm>-<dd>-<yyyy>
    Output the results as a date with leading zeros <mm>/<dd>/<yyyy>
    Specify the field width of the output appropriately
*/

#include <stdio.h>

int main(void)

{
    int month = 0;
    int day = 0;
    int year = 0;

    scanf("%d%*c%d%*c%d", &month, &day, &year);

    printf("%02d/%02d/%04d\n", month, day, year);

    return 0;
}