#include<stdio.h>
int main()
{
	int i, pos,len=0;
	char str[100];
	char newchar;

	gets_s(str);
	scanf("%c", &newchar);
	scanf("%d", &pos);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len; i > pos; i--)
	{
		str[i] = str[i - 1];
	}
	str[i] = newchar;
	str[len + 1] = '\0';
	puts(str);


	

}
