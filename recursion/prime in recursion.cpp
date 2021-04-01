#include<stdio.h>
int  isPrime(int num)
{
	static int i = 2;
	if (i >= num)
		return 1;
	else if (num%i==0)
		return 0;
	else
	{	
		i++;
		isPrime(num);
	}
}
int main()
{
	int num;
	scanf("%d", &num);
	int r=isPrime(num);
	if (r==1 && num!=1)
		printf("prime");
	else
		printf("Not prime");
}