#include<stdio.h>

int main()
{
	FILE *fp1;
	fp1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\input.txt", "r");
	if (fp1 == NULL)
	{
		printf("File opening failed");
		return 1;
	}
	int x;
	while (1)
	{
		x = fgetc(fp1);
		if (x == EOF)
			break;
		printf("%c", x);
	}

	//rewind(fp1);
	fseek(fp1, 0,SEEK_SET);
	
	printf("\n\nSecond print\n\n");
	while (1)
	{
		x = fgetc(fp1);
		if (x == EOF)
			break;
		printf("%c", x);
	}

}