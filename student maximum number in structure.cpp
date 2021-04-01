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
	float max;
	int i, n,pos=0;
	printf("How many student:  ");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("enter name\n");
		fflush(stdin);
		scanf("%s", s1[i].name);
		printf("enter id\n");
		scanf("%d", &s1[i].id);
		printf("cgpa  ");
		scanf("%f", &s1[i].cgpa);
		printf("phn   ");
		scanf("%d", &s1[i].phn);
		printf("addre   ");
		fflush(stdin);
		scanf("%s", s1[i].add);
	}
	max = s1[0].cgpa;
	i = 0;
	while( i < n)
	{
		if (s1[i].cgpa > max)
		{
           max = s1[i].cgpa;
		   pos = i;
		
		}
		i++;
	   
	}

		printf("\n\n%dm student info:: \n", i + 1);
		printf("Name: %s", s1[pos].name);
		printf("Id: %d", s1[pos].id);
		printf("CGPA: %f", s1[pos].cgpa);
		printf("Phone: %d", s1[pos].phn);
		printf("Address:: %s\n", s1[pos].add);
		printf("\nmaximum student cgpa:%f\n", max);
	
	return 0;
}[]