#include<stdio.h>

int main()
{
	int i, j, pos, s2Len = 0;
	char str1[100], str2[100], str3[100];
	printf("Enter main string: \n");
	gets_s(str1);
	printf("Enter another string: \n");
	gets_s(str2);
	printf("Enter position to insert: \n");
	scanf("%d", &pos);
	for (i = 0; i<pos; i++)
	{
		str3[i] = str1[i];
	}
	str3[i] = '\0';

	for (i = i, j = 0; str2[j] != '\0'; i++, j++)  ///here we keeping full of the str2 after adding first part of str1
	{
		str3[i] = str2[j];
	}
	str3[i] = '\0';

	for (i = i, j = pos; str1[j] != '\0'; i++, j++) ///here we add rest of the str1 to str3
	{
		str3[i] = str1[j];
	}
	str3[i] = '\0';
	puts(str3);
	return 0;
}
