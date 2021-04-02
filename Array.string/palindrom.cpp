#include<stdio.h>
void palindrome(char str1[50], char str2[50]);
int main()
{

	char str1[100];
	char str2[50];
	gets_s(str1);
	palindrome(str1, str2);
	return 0;
}
void palindrome(char str1[50], char str2[50])
{
    int  i, j, len = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1, j = 0; i >= 0; i--, j++)
	{
		str2[j] = str1[i];
	}
	str2[j] = '\0';


	for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);
	if (str1[i] == str2[i])
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not palindrome\n");
	}
}