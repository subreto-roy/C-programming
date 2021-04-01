#include<stdio.h>
int main()
{
	FILE *p;
	p = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name1.txt", "r");
	if (p == NULL)
	{
		printf("ERROR");
		return 1;
	}

	char s[50];
	fgets(s, 100, p);
	//gets_s(s);
	printf("%s", s);
	fclose(p);

}