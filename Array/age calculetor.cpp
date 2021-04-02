#include<stdio.h>
int main()
{
	int birthday, i, birthmonth, birthyear, presentday, presentmonth, presentyear, age1, age2;
	int age3;
	printf("please input your presentday,month,year:\n");
	scanf("%d %d %d", &presentday, &presentmonth, &presentyear);
	printf("please input your birthday,month,year:\n");
	scanf("%d %d %d", &birthday, &birthmonth, &birthyear);
	if (presentday > 31 && birthday > 31 && presentmonth > 12 && birthmonth > 12)
	{
		age1 = presentday - birthday;
		age2 = presentmonth - birthmonth;
		age3 = presentyear - birthyear;
	}
	for (i = birthyear; i <= presentday; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
		{
			age3= (presentyear - birthyear)+1;
		}
		else
		{
			age3 = presentyear - birthyear;
		}
	}
	printf("you are %d day %d month %d year", age1, age2,age3);
	return 0;


}