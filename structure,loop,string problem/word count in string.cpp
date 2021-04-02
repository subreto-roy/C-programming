#include<stdio.h>
int main()
{
	int i, count = 1;
	char str[100];
	gets_s(str);
	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("%d", count);

}