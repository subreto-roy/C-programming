#include<stdio.h>
#include<string.h>
bool ispal(char str[])
{
	int i, j;
	bool isPalindrome = true;
	int len = strlen(str);
	for (i = 0,j=len-1; i<len; i++,j--)
	{
		if (str[i] != str[j])
		{
			isPalindrome = false;
			str[j] = str[i];
		}
	}

	return isPalindrome;
}
int main()
{
	char str[50];
	gets_s(str);
	
	if (ispal(str))
	{
		printf("Yes");
	}
	else
	{
		printf("No. Output:: %s\n", str);
	}
}