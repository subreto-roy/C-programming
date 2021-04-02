/*int main()
{

	int flag = 0, i, j,count=0;
	int n;
	scanf_s("%d", &n);
	
	for (i = 1; i <=10000; i++)
	{
		flag = 0;
		for (j = 2; j<i; j++)
		{
			if (i%j == 0)
			{
				flag = 1;
				break;
			}
		}

		if (flag == 0 && i != 1)
		{
			count++;
			if (count == n)
			{
				printf("%d ", i);
				break;
			}
		}
	}
}
*/
#include<stdio.h>
int main()
{
	int i, n, arr[100];
	scanf("%d",&n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < n; i++)
	{
		printf("\nArr[%d]= %d\n", i, arr[i]);
	}

}

