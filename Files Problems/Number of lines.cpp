#include<stdio.h>
int main()
{
	FILE *p1;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name1.txt", "w");
	if (p1 == NULL)
	{
		printf("ERROR");
		return 0;
	}
	char s[100];
	int i, j, count = 0;
	fgets(s, 100, p1);
	for (s[i] != EOF)
	{
		if (s[i] == '\n')
		{
			count++;
		}
	}

	printf("%d", count);


}