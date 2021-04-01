#include<stdio.h>
int main()
{
	int number=100;
	
	int i = 0, sum =0;
	for (i=0;i<number;i++)
	{
		if (i == 0 )
		{
			printf("0");
		}
		else if (i == 1)
		{
			printf("1");
		}
		else
		{
			sum = (i-2) + (i - 1);
			printf("%d\n",sum);

		}
	} 
	return 0;
}