#include<stdio.h>
void uppercase(char *p)
{
	int i;
	
	for (i = 0; (*(p+i)) != '\0'; i++)
	{
		if ( (*(p+i)) >= 'a' &&(*(p+i)) <= 'z')
		{
			*(p+i) = *(p+i) - 32;
		}
	}
	(*(p+i)) = '\0';
	printf("%s ", p);
}
int main()
{
	char str1[50];
	gets_s(str1);
	uppercase(str1);
	//printf("%s", *(p + i));
}