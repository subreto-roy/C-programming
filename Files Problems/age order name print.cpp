#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person
{
	char name[100];
	int age;
}s[15];
int main()
{
	FILE *p1, *p2;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "r");
	p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\output.txt", "w");
	if (p1 == NULL )
	{
		printf("error opening\n");
		exit(1);
	}
	int i,j, pos = 0,pos1=0,n;
	int temp1,temp2;
	char temp[100];
	fscanf(p1,"%d", &n);
	for (i = 0; i < n; i++)
	{
		fscanf(p1, "%s %d", s[i].name, &s[i].age);


	}
	for (i = 0;i<n; i++)
	{
		for (j = i + 1; j<n; j++)
		{
			if (s[j].age > s[i].age)
			{
				temp1 = s[j].age;
				strcpy(temp, s[j].name);
				s[j].age = s[i].age;
				strcpy(s[j].name, s[i].name);
				s[i].age = temp1;
				strcpy(s[i].name, temp);
			}
	    }
	}


	
	fclose(p1);
	//fprintf(p2, "Name: %s ", s[pos].name);
	for (i = 0; i < n; i++)
	{
		fprintf(p2, "%s %d ",s[i].name, s[i].age);
	}
	fclose(p2);

}