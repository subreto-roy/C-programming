#include<stdio.h>
void subsrting(char *p1, char *p2)
{
	int i, j, k, flag = 1;
	for (i = 0; *(p1) != '\0'; i++)
	{
		while (*(p2) != '\0')
		{
			if ((*p1) == *(p2))
			{
				flag = 1;
				p2++;
				p1++;
				
			}
			else
			{
				flag = 0;
				p1++;
				break;
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
	if (flag == 1)
	{
		printf("found");
	}
	else
	{
		printf("not found");
	}
}
int main()
{
	char str1[50], str2[50];
	gets_s(str1);
	gets_s(str2);
	subsrting(str1, str2);
	return 0;

}
