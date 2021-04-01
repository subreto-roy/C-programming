#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,fs,ls;
	char str[100];
	gets_s(str);
	int len = strlen(str);
	str[len] = ' ';
	//str[len + 1] = '\0';
	for (i = 0,fs=0; i<=len; i++)
	{
		if (str[i] == ' ')
		{
			ls = i - 1;
			
			if (str[ls] == 'k')
			{
				for (j = fs; j <= ls; j++)
				{
					printf("%c", str[j]);
				}
				printf("\n");
			}

			fs = i + 1;
		}
	}
}