#include<stdio.h>
int main()
{
	int i,j,pos;
	char mainStr[100], subStr[100],s3[100];
	printf("Enter main string: \n");
	gets_s(mainStr);
	printf("Enter sub string: \n");
	gets_s(subStr);
	printf("Enter Position: \n");
	scanf("%d", &pos);

	for (i = 0; i < pos; i++)
	{
		s3[i] = mainStr[i];
	}

	for (i = i, j = 0; subStr[j] != '\0'; i++, j++)
	{
		s3[i] = subStr[j];
	}

	for (i = i, j = pos; mainStr[j] != '\0'; i++, j++)
	{
		s3[i] = mainStr[j];
	}
	s3[i] = '\0';
	printf("After operation: %s\n", s3);
}