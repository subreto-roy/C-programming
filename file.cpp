#include<stdio.h>
int main()
{
	int a[5], i, max; FILE *fp;
	fp = fopen("input.txt", "r");
	//fscanf(fp, "%d", &a);
	//fscanf(fp, "%d", &b);
	for(i=0;i<5;i++)
	sum = a + b;
	fp1 = fopen("output.text", "w");
	fprintf(fp1, "sum=%d\n", sum);
	fclose(fp);
	fclose(fp1);
	return 0;

}