#include<stdio.h>
int main()
{
	FILE *p;
	p = fopen("file1.txt","r");
		if (p == NULL)
		{
			printf("ERROR");
			return 1;
		}

		int n;
		fscanf(p, "%d", &n);
		printf("%d", n);
		fclose(p);

}