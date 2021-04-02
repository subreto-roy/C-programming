#include<stdio.h>
int main()
{
	int i,j;
	char str1[100];
	gets_s(str1);
	for (i = 0,j=0; str1[i] != '\0'; i++)
	{
		if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' ||str1[i ]== 'I' || str1[i] == 'O' || str1[i] == 'U')
		{
			continue;
		}
		else
		{
			str1[j] = str1[i];
			j++;
		}

	}
	str1[j] = '\0';
	puts(str1);

}