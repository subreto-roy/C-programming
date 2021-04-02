#include<stdio.h>
int main()
{
	int i, j, len = 0;
	char str1[100], str2[100];
	gets_s(str1);
	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1, j = 0; str1[i] != '\0'; i--, j++)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';
	printf("Reverse: %s\n", str2);
	return 0;
}
