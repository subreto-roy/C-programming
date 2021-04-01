//Write a function in C  to concatenate two Strings without using built in function
#include<stdio.h>
int main()
{
	int j, i, len;
	char str1[100];
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	len = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		len = len + 1;
	}
	str1[len] = ' ';
	for (i = len+1, j = 0; str2[j] != '\0'; i++, j++)
		
	{
		str1[i] = str2[j];
	}

	
	str1[i] = '\0';
	printf("%s ", str1);

	return 0;
}