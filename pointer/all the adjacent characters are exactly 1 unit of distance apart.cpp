#include<stdio.h>
void adjancent(char *p1)
{
	int i, adjacent;
	for (i = 0; *p1 != '\0'; i++)
	{
		/*if (*p1 - *(++p1) != 1)
		{
			printf("yes");
		}
		else
		{
			printf("no");
		}*/
		adjacent = *p1 - (*(++p1));
		p1++;

	}
	/*if (sum == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}*/
	printf("%d", adjacent);
}
int main()
{
	char str[50];
	gets_s(str);
	adjancent(str);
	return 0;
}