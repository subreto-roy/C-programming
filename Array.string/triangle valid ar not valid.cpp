#include<stdio.h>
int main()
{
	float a, b, c,sum;
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	{
		if (a != 0 && b != 0 && c != 0)
		{
			
			if (c < a+b && a<c+b && b<a+b)
			{
				printf("valid");
			}
			else
			{
				printf("not valid");
			}
		}
		else
		{
			printf("invalid");
		}
	}
}