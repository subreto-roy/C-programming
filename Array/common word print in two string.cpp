#include<stdio.h>
int main()
{
	int i, j, k, flag = 1;

	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	for (i = 0; str1[i] != '\0'; i++)
	{
		for (j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] == str2[j])
			{
				printf("%c", str1[i]);
			}
		}
	}



}