#include<stdio.h>
int main()
{
	int i;
	for (i = 1; i <= 10; i++)
	{
		if (i==6 || i==8 || i==9)
		{
			continue;
		}
		else
		{
			printf("%d ", i);
		}
	}
}