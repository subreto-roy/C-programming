#include<stdio.h>
int main()
{
	int i,k;
	char str1[100];
	char str2[100];
	gets_s(str1);
	for (i = 0,k=0; str1[i] != '\0'; i++)
	{
		if ( i==0)
		{
			str2[k] = str1[i];
			k++;

		}
		 if (str1[i] ==' ')
		{
			str2[k] = str1[i + 1];
			k++;
		}
	}
	str2[k] = '\0';
	printf("%s", str2);
	


}