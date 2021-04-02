#include<stdio.h>

int main()
{
	int i, upperCase = 0, lowerCase = 0;
	char str1[100];
	gets_s(str1);

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			upperCase++;
		}
	}
	str1[i] = '\0';
	printf("%d\n", upperCase);

	for (i = 0; str1[i] != '\0'; i++) {

		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			lowerCase++;
		}
	}
	str1[i] = '\0';
	printf("%i\n", lowerCase);
	return 0;
}
