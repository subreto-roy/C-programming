#include<stdio.h>
#include<math.h>
#define pi acos(-1)
int main()
{
	double a, b, c;
	double A, B, C, sum1, sum2, sum3;

	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &A, &B, &C);

	if (a != 0 && b != 0 && c != 0 && A != 0 && B != 0 && C != 0)
	{
		sum1 = a / sin((A*pi) / 180.0);
		sum2 = b / sin((B*pi) / 180.0);
		sum3 = c / sin((C*pi) / 180.0);
		if (sum1 == sum2 && sum2 == sum3 && sum3 == sum1)
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
		printf("Not valid");
	}


}