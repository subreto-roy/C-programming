#include<stdio.h>


int main()
{
	int i, arr[5];

	for (i = 0; i < 5; i++)
	{
		printf("Arr[%d] address is: %u\n", i,&arr[i]);
	}

	printf("\nOnly Address of arr is: %u", arr);
	printf("\nOnly Address of arr+1 is: %u", arr+1);
}