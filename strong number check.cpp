#include<stdio.h>
int main()
{
	int num,n1,n2,j,rem,fact,sum=0,i;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		n1 = i;
		n2 = i;
		while (n2!= 0)
		{
			rem = n2 % 10;
			fact = 1;
			for (j = 1; j <= rem; j++)
			{
				fact = fact * j;
			}
			sum = sum + fact;
			n2= n2 / 10;
		}

		if (sum == n1)
		{
			printf("%d ", n1);
		}
		sum = 0;
		
	}
	return 0;
}