#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
	double a, b, c;
	double A, B, C, sum1, sum2, sum3,sum4,sum5=180;
    
	scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &A, &B, &C);


	sum1 = a / sin((A*pi) / 180);
	sum2 = b / sin((B*pi) / 180);
	sum3 = c / sin((C*pi) / 180);
	sum4 = a + b + C;
	if (a != 0 && b != 0 && c != 0 && A != 0 && B != 0 && C != 0)
	{


		if (c < a + b && b < a + c && a < b + c && sum4==sum5  && sum1 == sum2 && sum2 == sum3)
		{
			printf("consistent");
		}
		else
		{
			printf("not consistent");
		}
	}
	else
	{
		printf("not valid");
	}

}