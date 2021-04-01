#include<stdio.h>
int isprime(int num);
int main()
{
	int n, getR,i, flag = 0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		getR=isprime(i);
		if (getR == 0 && i != 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}

int isprime(int num)

{
	int i, flag = 0;

	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}