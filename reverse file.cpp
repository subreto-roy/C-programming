#include<stdio.h>
int main()
{
	FILE *p1,*p2;
    p1 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\input.txt", "r");
	p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\OutputFile.txt", "w");
	if (p1 == NULL || p2==NULL)
	{
		printf("error");
		return 1;
	}
	
	char str[100],tmp;
	fgets(str, 100, p1);
	int i,j, len = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	for (i = len - 1, j = 0; j<= i; i--,j++) 
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	fprintf(p2,"%s",str);
	fclose(p1);
	fclose(p2);
	
}