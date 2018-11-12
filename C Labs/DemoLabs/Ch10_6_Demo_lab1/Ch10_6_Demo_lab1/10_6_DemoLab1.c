/*
Ricky Smith
24 July 18

Ch10.6 Demo Lab 1
*/

#include <stdio.h>

#define StringizeTest(s) #s

#define ClassNumber 12

#define Paste1(a, b) a##b
#define Paste2(a, b) a##b
#define Paste3(a, b) a##b


int main(void)
{
	char str[] = { StringizeTest(Ricky is Cool) };

	puts(str);

	int num = ClassNumber;

	printf("%d\n\n\n", num);

	char str2[] = { Paste1(Ricky, Ray) };
	char str3[] = { Paste2(Smith, Jr) };

	puts(Paste3(str2, str3));

	

	while (1);
	return 0;
}