#include<stdio.h>
int main()
{
	int ar[5] = { 1,2,3,4,5 }, i, n;
	//scanf("%d", &n);
	/*for (i = 0; i <5; i++)
	{

		printf("Address of A[%d] is: %u\n", i, &ar[i]);
	}
	printf("\nAddress of ar is: %u\n", ar);
	printf("\nAddress of ar is: %u\n", ar+1);*/
	for (i = 0; i <5; i++)
	{

		printf("Value of A[%d] is: %d\n", i, ar[i]);
	}
	printf("\nValue of ar is: %u\n", *ar);
	printf("\nValue of ar is: %u\n", *(ar + 1));

}