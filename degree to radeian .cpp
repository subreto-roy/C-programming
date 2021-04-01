#include<stdio.h>
#include<math.h>
#define pi 3.1416
int main()
{
	int deg;
	float rad;
	scanf("%d", &deg);
	rad = sin((deg*pi)/180);
	printf("%f", rad);
}