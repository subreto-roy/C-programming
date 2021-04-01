#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p;
	p = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\input.txt", "r");


	if (p == NULL)
	{
		printf("Error opening\n");
		exit(1);
	}

	char s[100];

	//fscanf(p, "%[^\n]", s);
	fgets(s, 100, p);
	printf("%s", s);
	fclose(p);
	printf("\nsuceesfull\n");
}