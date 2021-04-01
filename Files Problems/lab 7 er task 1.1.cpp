#include<stdio.h>
int main()
{
	FILE *ptr;

	ptr = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\input.txt", "r");
	if(ptr == NULL)
	{
		perror("");
		return 1;
	}


	int x, i, sum = 0;
	for (i = 1; i <= 10; i++)
	{
		fscanf(ptr, "%d", &x);
		sum = sum + x;
	}
	printf("Sum= %d\n", sum);
	return 0;
}