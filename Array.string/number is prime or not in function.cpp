#include<stdio.h>
int isprime(int num);
int main()
{
	int num, i,flag=0;
	scanf("%d", &num);
	flag = isprime(num);
	if (flag == 1)
	{
		printf("not prime");
	}
	else
	{
		printf("prime");
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