//Write a function that prints the elements on odd positions in a string.
#include<stdio.h>
void oddposition(char str1[50]);
int main()
{
	char str1[50];
	gets_s(str1);
	oddposition(str1);
	return 0;
}
void oddposition(char str1[50])
{
	int i, j, len = 0;
	char str2[50];
	j = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}
	for(i=0;i<=len-1;i++)
	{
		if (i%2!=0)
		{
			str2[j++] = str1[i];
			
		}
	}
	str2[j] = '\0';
	printf("%s", str2);
	
}
