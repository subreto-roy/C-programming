#include<stdio.h>

/*void LeapYear(int n1,int n2)
{
	int i;
	for (i = n1; i <= n2; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			printf("%d ", i);
		}
	}


}*/

int isLeapYear(int year)
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int n1, n2, i,r;
	scanf("%d", &n1);
	scanf("%d", &n2);
	for (i = n1; i <= n2; i++)
	{
		r=isLeapYear(i);
		if (r == 1)
		{
			printf("%d ", i);
		}
	}
}
	

	

