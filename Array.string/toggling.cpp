#include<stdio.h>

int main()
{
	int i;
	char str1[100];
	gets_s(str1);

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
	}
	str1[i] = '\0';
	printf("After toggling: %s\n", str1);

	for (i = 0; str1[i] != '\0'; i++) {

		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] = str1[i] + 32;
		}
	}
	str1[i] = '\0';
	printf("After toggling: %s\n", str1);
	return 0;
}
