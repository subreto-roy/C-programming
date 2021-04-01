#include<stdio.h>
int main()
{
	int num;
	printf("PERFECTION OUTPUT\n");
	
    while ((scanf("%d",&num) && num != 0))
	{
		int i,sum = 0;
		int temp = num;
		for (i = 0; i <= num / 2; i++)
		{
			if (temp%i == 0)
			{
				sum += i;
			}
		}
			if (num == sum)
			{
				printf("%d PERFECT\N", num);
			}
			else if (num < sum)
			{
				printf("%d ABUNDANT\n", num);
			}
			else
			{
				printf("%d DEFICIENT\n", num);
			}
			printf("END OF OUTPUT\n");
		
	}
}