#include <stdio.h>
#include <string.h>

int main(void)

{
	char str1[] = "Ricky Ray";
	char str2[] = "Smith Jr";

	printf("str1 is %s\n", str1);
	printf("str2 is %s\n", str2);


	for (int i = 0; i < sizeof(str1); i++)
	{
		if (*(str1 + i) == 'k')
		{
			memmove(str1 + i, str1 + i + 1, strlen(str1) - i);
		}
	}

	printf("str1 is now %s\n\n\n", str1);

	char str3[] = "Ricky Ray";
	char str4[] = "Smith Jr";

	printf("str3 is %s\n", str3);
	printf("str4 is %s\n", str4);


	for (int i = 0; i < sizeof(str3); i++)
	{
		if (*(str3 + i) == ' ')
		{
			memmove(str3 + i, str3 + i + 1, strlen(str3) - i);
		}
	}

	printf("str1 is now %s\n", str3);


	while (1);

	return 0;
}