#include<stdio.h>
int main()
{
	int i,j;
	char str[100];
	gets_s(str);
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] ==' '  && str[i+1]==' ')
		{
			continue;
		}

		else
		{
			str[j] = str[i];
			j++;
		}
	}
	str[j] = '\0';
	puts(str);
}