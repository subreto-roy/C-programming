//Write a function that will compare two strings. Don’t use any built in function. 
#include<stdio.h>
int compare_str(char a[], char b[]);
int main()
{
	char b[50];
	char a[50];
	int r;
	gets_s(a);
	gets_s(b);
	r=compare_str(a, b);
	if (r > 0)
	{
		printf("%s", a);
	}
	else
	{
		printf("%s", b);
	}
	return 0;

}
int compare_str(char a[], char b[])
{
	int i,result;
	for (i = 0; a[i] == b[i] && a[i] != '\0'; i++);
	
		if (a[i] < b[i])
		{
			result = -1;
		}
		else if (a[i] > b[i])
		{
			result = 1;
		}
		else if (a[i] == b[i])
		{
			result = 0;
		}
	
		return result;
}