#include<stdio.h>
#include<stdlib.h>

struct killer
{
	char name[100];
	int id;
	float gpa;
	int age;
}s[15];
int main()
{
	FILE *ptr;

	ptr = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "r");
	if (ptr == NULL)
	{
		perror("");
		return 1;
	}
	int i, j, n, max, pos[15] = { 0 };
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		fscanf(ptr, "%s", s[i].name);
		fscanf(ptr, "%d", &s[i].id);
		fscanf(ptr, "%f", &s[i].gpa);
		fscanf(ptr,"%d",&s[i].age);
	}
	
	max = s[0].gpa;
	for (i = 0; i < n; i++)
	{
		if (max < s[i].gpa)
		{
			max = s[i].gpa;
			
		}
	}
	int count = 0;
	for (i = 0; i < n; i++)
	{
		if (max <=s[i].gpa)
		{
			
			count++;
		}
	}
	
	printf("Max CGPA holder students: %d person(s)\n", count);

	for (i = 0,j=0; i < n; i++)
	{
		if (max <= s[i].gpa)
		{
			
			printf("%s  ", s[i].name);
			printf("%d  ", s[i].id);
			printf("%f  ", s[i].gpa);
			printf("%d  \n", s[i].age);
		}
	}
		
	

	fclose(ptr);
}
	


