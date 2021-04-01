#include<stdio.h>
int main()
{
	FILE *p;
	p=fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name1.txt", "r");
	if (p == NULL)
	{
		printf("error");
		return 0;
	}
	int i;
	char s1[100];
	fgets(s1, 100, p);
	for (i = 0; s1[i] != '\0'; i++)
	{
		if (i == 0)
		{
			s1[i] = '#';
		}

		else if (s1[i] == ' ')
		{
			s1[i +1] = '#';
		}
	}
	//s1[i] = '\0';
	printf("%s", s1);
}
