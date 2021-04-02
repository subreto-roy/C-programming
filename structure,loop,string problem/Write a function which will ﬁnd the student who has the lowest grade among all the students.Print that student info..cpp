//Write a function which will ﬁnd the student who has the lowest grade among all the students.Print that student info.
#include<stdio.h>
struct student {
	float grade;
	char name[50];
	int id;
	char email[50];
};
int lowestgrade(struct student s1[], int n);
int main()
{
	struct student s1[50];
	int i, n;
	int result;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &s1[i].grade);
		scanf("%d", &s1[i].id);
		fflush(stdin);
		scanf("%s", &s1[i].name);
		fflush(stdin);
		scanf("%s", &s1[i].email);

	}
	result = lowestgrade(s1, n);
	
	printf("%s", s1[result].name);
	printf("%d", s1[result].id);
	printf(" %f", s1[result].grade);
	printf("%s", s1[result].email);


	return 0;
}
int lowestgrade(struct student s1[], int n)
{
	float low;
	int i;
	int pos=0;
	i = 0;
	low = s1[0].grade;
	while (i < n)
	{
		if (s1[i].grade < low)
		{
			low = s1[i].grade;
			pos = i;
		}
		i++;
	}
	return pos;
}
