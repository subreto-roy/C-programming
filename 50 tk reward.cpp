#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct r
{
	char place[100];
	char bird[100];
}s1[15];

int main()
{
	FILE *p1;
	p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPram\\VS Code\\Class\\Class\\Files Problems\\output.txt", "r");
	int i, j;
	int n;
	char place[100];
	char placename[100];
	//scanf("%d", &n);
	for (i = 0; i < 100; i++)
	{
		fscanf(p1, "%s %s", s1[i].place, s1[i].bird);
	}
	for (i = 0; place[i] != '\0'; i++)
	{
		for(j=0;placenma)
		if (place == placename)
		{
			printf("%s", s1[i].place);
		}
	}
	

    
}
