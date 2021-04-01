#include<stdio.h>
int strcmp(char *p1, char *p2)
{
	int i=0;
	while (*(p1) == *(p2) && *(p1) != '\0')
	{
		p1++;
		p2++;
	}

	if (*(p1) > *(p2))
	{
		return 1;
	}
	else if (*(p1) < *(p2))
	{
		return -1;
	}
	else
		return 0;


}
int main()
{
	int i;
	char str1[50];
	char str2[50];
	gets_s(str1);
	gets_s(str2);
	int res= strcmp(str1, str2);
	if (res == 1)
	{
		printf("str1 is large");

	}
	else if (res == -1)
	{
		printf("str2 is large");
	}
	else
	{
		printf("string is equal");
	}
}