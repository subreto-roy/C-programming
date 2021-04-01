//create a file 
#include<stdio.h>
int main()
{
	FILE *p;

	p = fopen("", "a");

	if (p == NULL)
	{
		printf("File opening failed\n");
		return 1;
	}

	int n;
	scanf("%d", &n);
	fprintf(p, "%d", n);
	printf("File written successful\n");
	fclose(p);


	return 0;
}
