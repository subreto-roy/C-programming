#include<stdio.h>
int main()
{
	int i,pos;
	char str[100];
	char dc;
	gets_s(str);
	scanf("%c", &dc);
    pos = 0;
	for (i = 0; str[i] != '\0'; i++)
	{ 
		if(str[i]==dc)
		pos = i;
	}
	for (i = pos; str[i] != '\0'; i++)
	{
		str[i] = str[i + 1];
	}
	puts(str);




}