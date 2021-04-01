  #include<stdio.h>
#include<math.h>
int main()
{
	/*//decimal to binary
	int binary=0,num,rem,i=1;
	scanf("%d", &num);
	while (num != 0)
	{
		rem = num % 2;
		binary = binary + rem * i;
		i = i * 10;

		num = num / 2;
	} 
	
	printf("In binary: %d\n", binary);

	*/
	//binary to decimal
	int n, p = 0,rem,sum=0;
	scanf("%d", &n);

	while (n != 0)
	{
		rem = n % 10;
		rem = rem * pow(2, p);
		sum = sum + rem;
		p++;
		n /= 10;
	}

	printf("%d\n", sum);






}