//WAP in C to remove all characters in second string which are present in first string.

#include<stdio.h>
int main()
{
	int i, j, k;
	char str1[50];
	char str2[50];
	gets_s(str1);
	gets_s(str2);
	i = 0;
	k = 0;
	while (str2[i] != '\0')
	{
		for (j = 0; str1[j] != '\0'; j++)
		{
			if (str2[i] == str1[j])
				break;
		}
	

	if (str1[j] == '\0')
	{
		str2[k] = str2[i];

		k++;
	}
	i++;

}
	str2[k] = '\0';
	printf("%s", str2);

}