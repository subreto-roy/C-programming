#include<stdio.h>
void issum(int *p)
{
	int i, sum=0;
	for (i = 0; i < 5; i++)
	{ 
		sum = sum + *(p + i);

	}
	printf("%d\n", sum);
}
int main()
{
	int i, ar[5];
	for (i = 0; i < 5; i++)
	{
		scanf("%d", ar+i);
	}
	issum(ar);
	return 0;
}