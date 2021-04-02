#include<stdio.h>
struct stdinfo
{
	char faculty_named[50];
	int faculty_id;
	float faculty_salary;
	struct course
	{
		char crs[20];
	}faculty_course[3];

};

int HighestPaidF(struct stdinfo s1[])
{
	float max = s1[0].faculty_salary;
	int i, pos;
	for (i = 1; i < 3; i++)
	{
		if (max < s1[i].faculty_salary)
		{
			max = s1[i].faculty_salary;
			pos = i;
		}
	}

	return pos;
}
int coursename(struct stdinfo s1[])
{
	int i,pos1;
	char s='APL';
	for (i = 1; i < 3; i++)
	{
		if (s1[i].faculty_course==s)
		{
			//s = s1[i].faculty_course;
			pos1 = i;
		}
	}
	return pos1;
}
int main()
{
struct stdinfo s1[100];
int i, j,getPos,getpos1;
for (i = 0; i < 3; i++)
		{
			scanf("%s", s1[i].faculty_named);
			scanf("%d", s1[i].faculty_id);
			scanf("%s", s1[i].faculty_salary);
			for (j = 0; j < 3; j++)
			{
				scanf("%s", s1[i].faculty_course[j].crs);
			}
		}


getPos=HighestPaidF(s1);
getpos1 =coursename(s1);


printf("Highest Paid faculty name: %s\n", s1[getPos].faculty_named);
printf("APL faculty name: %s\n", s1[getpos1].faculty_named);
return 0;

}