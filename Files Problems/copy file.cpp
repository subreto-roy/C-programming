#include<stdio.h>
int main()
{
	FILE *p1, *p2;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name1.txt", "r");
	p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\name2.txt", "w");
	if (p1 == NULL || p2 == NULL)
	{
		if (p1 == NULL)
			printf("ERROR1");
		else
			printf("Error2");
		return 1;
	}

	char s[50];
	fgets(s, 50, p1);

	
	fprintf(p2,"%s", s);
	fclose(p1);
	fclose(p2);

}