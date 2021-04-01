#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;

	ptr = fopen("001Sample.txt", "r");
	if (ptr == NULL)
	{
		printf("Error");
		exit(1);
	}

	char str[100];
	//fscanf(ptr,"%[^\n]",str);
	//fgets(str,100,ptr);
	int x;
	int count = 1;
	while (1)
	{
		x = fgetc(ptr);
		if (x == EOF)
		{
			break;
		}
		else if (x == '\n')
		{
			count++;
		}


	}
	//    printf("%s",str);
	printf("%d", count);