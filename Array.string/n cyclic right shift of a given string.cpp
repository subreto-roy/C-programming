#include<stdio.h>
void cyclic(char str[50],int n);
int main()
{
	char str[50];
	int n;
	gets_s(str);
	scanf("%d", &n);
	cyclic(str, n);
	return 0;
}
void cyclic(char str[50], int n)
{
	char temp[60];
	
	int len = 0;
	int i, j,k;
	for (i = n,j=0; str[i]!='\0'; i++,j++)
	{
		temp[j] = str[i];
	}
	temp[j] = '\0';
	for (i = j,j=0; j < n; i++,j++) 
	{
		temp[i] = str[j];
	}
	temp[i] = '\0';


	printf("%s", temp);
}