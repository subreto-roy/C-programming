//This function will return the average of the grades of the students.

#include<stdio.h>
struct student {
	
	float grade;
	
};

float getAvgGrade(struct student s1[], int n);
int main()
{
	struct student s1[100];
	int i, n;
	float result;

	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &s1[i].grade);
	}
	
	result=getAvgGrade(s1, n);
	
	printf("%f",result);
	return 0;
}

float getAvgGrade(struct student s1[], int n)
{
	int i;
	float sum = 0;
	float avg;
	for (i = 0; i < n; i++)
	{
		sum = s1[i].grade+sum;
	}
	avg = sum / n;
	return avg;
}


