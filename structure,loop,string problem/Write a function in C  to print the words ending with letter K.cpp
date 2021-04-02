//Write a function in C  to print the words ending with letter K
#include<stdio.h>
void endingletter(char str1[50]);
int main()
{
	char str1[50];
	gets_s(str1);
	endingletter(str1);
	return 0;
}
void endingletter(char str1[50])
{
	int i, j, k, len=0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}
	str1[len] = ' ';

	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == ' ' && str1[i - 1] == 'k')
		{
			for (k = j; k < i; k++)
			{
				printf("%c", str1[k]);
			}
			printf("\n");
			j = i + 1;
			
		}
		else 
		{
			if(str1[i] == ' ')
			j = i + 1;
		}
	}
}
	


