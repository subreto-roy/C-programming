//Now you will have to write a function to find the student’s id with the maximum grade. First try it yourself
//and then compile and run the following code with the IDE and see the output.
#include<stdio.h>
struct student {
	char name[50];
	float cgpa; 
	int id;
}s1[100];
int main()
{
	float max;
	int i, n,pos=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		fflush(stdin);
		scanf("%s", s1[i].name);
		scanf("%d", &s1[i].id);
		scanf("%f", &s1[i].cgpa);
	}
	max = s1[0].cgpa;
	for (i = 0; i < n; i++)
	{
		if (s1[i].cgpa > max)
		{
			max = s1[i].cgpa;
			pos = i;

		}
	}
	fflush(stdout);
	printf("name=%s\n", s1[pos].name);
	printf("ID=%d\n", s1[pos].id);
	printf("cgpa=%f\n", s1[pos].cgpa);
	return 0;
}