#include<stdio.h>
#include<string.h>
int palindrome(char str[],int len)
{
	static int i = 0;

	if (str[i] != str[len])
	{
		return 0;
	}
	else if (i > len)
	{
		return 1;
	}
	else
	{
		i++;
		palindrome(str, len - 1);
	}
	

}
int main()
{
	char str[50];
	gets_s(str);
	int len = strlen(str) - 1;
	int r=palindrome(str,len);
	if (r)
		printf("Palindrome");
	else
		printf("Not palindrome");

}