
#include<stdio.h>
#include<stdlib.h>

struct killer
{
	char name[100];
	int salary;
}s[15];
int main()
{
	FILE *p1, *p2;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "r");
	p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\output.txt", "w");

	if (p1 == NULL || p2 == NULL)
	{
		if (p1 == NULL)
		{
			printf("Error opening1\n");
		}
		else
		{
			printf("ERROR OPENING2\n");
		}
		
		exit(1);
	}
	
	int i,pos = 0, max;
	for (i = 0; i < 10; i++)
	{
		fscanf(p1, "%s %d", s[i].name, &s[i].salary);
		
	}
	max = s[0].salary;
	for (i = 0; i < 10; i++)
	{
		if (max < s[i].salary)
		{
			max = s[i].salary;
			pos = i;
		}
	}
	fclose(p1);
    fprintf(p2,"Name: %s ", s[pos].name);
	fprintf(p2," salary: %d", s[pos].salary);
	
	fclose(p2);
}