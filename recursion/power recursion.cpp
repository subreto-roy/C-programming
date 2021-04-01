#include<stdio.h>
int power(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	else
	{
		return base * power(base,exp-1);
	}

}

int main()
{
	int exp, base;
	scanf("%d %d", &base, &exp);
	int r=power(base, exp);
	printf("%d", r);

}