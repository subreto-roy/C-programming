#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p1, *p2;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "r");
	p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\output.txt", "w");
	if (p1 == NULL || p2 == NULL)
	{
		printf("error opening\n");
		exit(1);
	}
	int ar1[50], temp;
	int i, j, n;
	fscanf(p1,"%d",ar);
	for (i = 0; i < n; i++)
	{
		fscanf(p1, "%d", &ar1[i]);
		//fprintf(p1,"%d", ar1[i]);
	}
	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (ar1[j] < ar1[i])
			{
				temp = ar1[j];
				ar1[j] = ar1[i];
				ar1[i] = temp;

			}
		}
	}
	for (i = 0; i < n; i++)
	{
		fprintf(p2, "%d ", ar1[i]);
	}
	fclose(p1);
	fclose(p2);


}
