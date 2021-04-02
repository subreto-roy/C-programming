#include<stdio.h>
int main()
{
	int a[100], a1[100], b[100], b1[100], c[100], c1[100], temp[100], rem1=0,rem2=0,rem3;
	int i, j, n,sum;
	int num1 = 0,num2=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for (i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		a1[j] = a[i];
	}
	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		b1[j] = b[i];
	}
	
	for (i = 0; i < n; i++)
	{
		rem1 = rem1 * 10 + a1[i];
	}

	for (i = 0; i < n; i++)
	{
		rem2 = rem2 * 10 + b1[i];
	}
	sum = rem1 + rem2;
	printf("sum = %d\n", sum);
	
	i = 0;
	while (sum != 0)
	{
		rem3 = sum % 10;
		c1[i] = rem3;
		printf("%d, ",c1[i]);
		i++;
		sum = sum / 10;
	}

	/*for (j = 0; j < i; j++)
	{
		printf("%d ", c1[i]);
	}*/

	
}