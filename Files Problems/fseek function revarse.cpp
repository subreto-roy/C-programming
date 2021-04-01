#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p1;
	p1=fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "r");
	int len,x;
	fseek(p1, 0, SEEK_END);
	len = ftell(p1);
	while (len >= 0)
	{
		fseek(p1, len, SEEK_SET);
		x = fgetc(p1);
		printf("%c", x);
		len--;
	}
	
}