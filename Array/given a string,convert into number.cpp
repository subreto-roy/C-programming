#include<stdio.h>
int main()
{
	char str[50];
	int  num[26];
	int i;
	gets_s(str);
	char j = '1';
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i]=j;
			j++;
		}
		 
	}
	puts(str);
}

