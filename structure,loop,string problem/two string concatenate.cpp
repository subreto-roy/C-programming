#include<stdio.h>
int main()
{
	int j,i, count;
	char str1[100]; 
	char str2[100];
	gets_s(str1);
	gets_s(str2);
	count = 0;
	for (i = 0; str1[i] != '\0'; i++)
		{
			count = count + 1;
		}
	for (i =count,j=0; str2[j] != '\0'; i++,j++)
	{
		str1[i] = str2[j];
	}
	str1[i] = '\0';
	printf("%s", str1);



		
	
}