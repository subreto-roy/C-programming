#include<stdio.h>
void replace(char str[50], char ch);

int main()
{
	char str[10];
	char ch;
	scanf("%c", &ch);

	gets_s(str);
	replace(str, ch);
	printf("%s", str);
	return 0;
}
void replace(char str[50],char ch)
{
	int i, j;
	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (str[i] == str[j])
			{
				str[i] = '#';
				str[j] = '#';

			}

		}

	}
}