#include<stdio.h>
#include<math.h>
int main()
{
	int num1, num2, i, dis, flag1=0,flag2 = 0;
	scanf("%d", &num1);
	scanf("%d", &num2);
	for (i = 2; i < num1; i++)
	{
		if (num1%i == 0 )
		{
			flag1 = 1;
			break;
		}
	}
	for (i = 2; i < num2; i++)
	{
		if (num2%i == 0)
		{
			flag2 == 1;
			break;
		}
	}
	dis = abs(num1 - num2);
	if ( flag1 == 0 && flag2==0 && dis==2)
	{
		printf("twin  prime");
	}
	else 
	{
		printf("Not twin");
	}
}





















