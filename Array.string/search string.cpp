#include<stdio.h>
int main()
{
	int  i, j,flag;
	char n;
	

	char str1[100];
	gets_s(str1);
	scanf("%c", &n);
	flag = 0;
	for (i = 0, j = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] == n)
		{


			flag = 1;
		}
	}
	if (flag == 1)
	{
		printf("found");
	}
	else
	{
		printf("not found");

	}
}