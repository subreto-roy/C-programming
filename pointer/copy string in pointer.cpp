#include<stdio.h>
void copystring(char *p,char *q)
{
	//int i;

	/*for (i = 0; *p!= '\0'; i++)
	{
		*q = *p;
		p++;
		q++;
	}
	*q = '\0'; */

	while ((*q++ = *p++) != '\0');
   
}
int main()
{
	char str1[50],str2[50];
	gets_s(str1);
	copystring(str1, str2);
	puts(str2);
}