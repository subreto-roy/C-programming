#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *ptr;

	ptr = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name2.txt", "r");
	if (ptr == NULL)
	{
		printf("Error");
		exit(1);
	}

	char str[100];
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

		if (x==' ' || x=='\n')
		{
		   count++;
		}
		


	}
	printf("%d ", count);

}