#include<stdio.h>
struct stdinfo
	{
		char name[10];
		int id;
		float cgpa;
		int phn;
		char add[100];
	}s1[600];
int main()
{
	int i, n;
	printf("How many student:  ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter name\n");
		fflush(stdin);
		scanf("%s",s1[i].name);
		printf("enter id\n");
        scanf("%d", &s1[i].id);
		printf("cgpa  ");
		scanf("%f", &s1[i].cgpa);
		printf("phn   ");
		scanf("%d",&s1[i].phn);
		printf("addre   ");
		fflush(stdin);
        scanf("%s",s1[i].add);
	}
	for (i = 0; i < n; i++)
	{
		printf("\n\n%d student info:: \n", i + 1);
		printf("Name: %s", s1[i].name);
		printf("Id: %d", s1[i].id);
		printf("CGPA: %f", s1[i].cgpa);
		printf("Phone: %d", s1[i].phn);
		printf("Address:: %s", s1[i].add);
	}
	return 0;
}