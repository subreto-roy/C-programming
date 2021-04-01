#include<stdio.h>
int main()
{
	int i,j,count=0;
	char str1[100];
	char str2[100];
	gets_s(str1);
	count = 0;
	for (i = 0; str1[i] != '\0'; i++)
	{
		count = count + 1;
	}
	for (i = count - 1, j = 0; i >= 0; i--, j++)
		{
			str2[j] = str1[i];
		}
	str2[j] = '\0';
	printf("%s", str2);

}