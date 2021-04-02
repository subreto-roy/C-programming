#include<stdio.h>
void dele(char str[100]);
int main()
{
	char str[100];
	gets_s(str);
	dele(str);
	return 0;
}

void dele(char str[100])
{
    int i, pos,lenth=0;
    scanf("%d", &pos);
	
	for (i = 0; str[i] != '\0'; i++)
	{
		  lenth++;
          
	}
	for (i = pos; i<=lenth-1; i++)
	{
		str[i] = str[i + 1];
	}

	puts(str);
}