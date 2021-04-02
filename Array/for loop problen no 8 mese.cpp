#include<stdio.h>


void number(int num)
{
	int i, rem,sum=1, count = 0;
	while (num != 0)
	{
		rem = num % 10;
		{

			count++;
		}
		num = num / 10;
		sum = rem * sum;
	}
	printf("%d", sum);
}
int main()
{
	int num;
	scanf("%d", &num);
	number(num);

}