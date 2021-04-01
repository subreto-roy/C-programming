#include<stdio.h>
int isprime(int *p)
{
	int i,flag = 0;
	for (i = 2; i < *p; i++)
	{
		if (*p%i == 0)
		{
			return 0;
		}
	}
	return 1;
	//return flag;
}
int main()
{
	int num,r;
	scanf("%d", &num);
	r=isprime(&num);
	if (r == 0)
	{
		printf("not prime");
		
	}
	else
	{
		printf(" prime");
	}
}