#include<stdio.h>
int main()
{
	int i;
	char str1[100];
	gets_s(str1);
	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == ' ')
		{
			printf("\n");
		}
		else
		{
			printf("%c", str1[i]);
		}
	}

}