#include<stdio.h>
#include<math.h>
int main()
{
	int n, rem, digitCount = 0, n1, n2, n3, sum = 0, i;
	scanf("%d", &n);


	for (i = 1; i <= n; i++)
	{
		n1 = i;
		n2 = i;
		n3 = i;
		sum = 0;
		digitCount = 0;
		while (n3 != 0)
		{
			digitCount = digitCount + 1;
			n3 = n3 / 10;
		}

		while (n1 != 0)
		{
			rem = n1 % 10;
			sum = sum + pow(rem, digitCount);
			n1 /= 10;
		}

		if (sum == n2)
		{
			printf("%d ", n2);
		}
	}






}
