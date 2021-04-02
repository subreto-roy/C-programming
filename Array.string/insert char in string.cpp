#include<stdio.h>
int main()
{
	int i,pos, len = 0;
	char str1[100];
	char newchar;
	

	printf("enter string   ");
	gets_s(str1);

	printf("enter posi  ");
	scanf("%d", &pos);

	printf("enter newchar  ");
	
	scanf(" %c", &newchar);
	for (i = 0; str1[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len; i > pos; i--)
	{
		str1[i] = str1[i - 1];
	}
	str1[i] = newchar;
	str1[len + 1] = '\0';
	printf("%s", str1);

}