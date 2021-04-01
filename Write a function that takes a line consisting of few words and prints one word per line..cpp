//Write a function that takes a line consisting of few words and prints one word per line.
#include<stdio.h>
void line(char str1[50]);
int main()
{
	char str1[50];
	gets_s(str1);
	line(str1);
	return 0;
}
void line(char str1[50])
{
	int i, j;

	char str2[50];
	

	for (i = 0; str1[i] != '\0'; i++)
	{

		if (str1[i] == ' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c ", str1[i]);
		}

	}
}

 
	
	
