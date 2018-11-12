/*
Ricky Smith
25 July 2018

Ch11 Demonstration Lab
Memory Operators

*/

#include <stdio.h>

int main(void)
{
	int var1;  //declared var1
	int var2;  //declared var2

	int *var_ptr;  //declared var_ptr as a pointer

	var1 = 28;  //assigned value of 28 to var1

	var_ptr = &var1;  //assigned var_ptr a value by pointing to the address of var1

	var2 = *var_ptr;  //assigned var2 a value by pointing to the value of var_ptr

		printf("var1:  %d compared to var2:  %d", var1, var2);  //prints var1 and var2

		while (1);
		return 0;
}