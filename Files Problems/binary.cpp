
#include<stdio.h>
#include<stdlib.h>

int main()
{ 
	FILE *ptr;

	ptr = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\files Problems\\input.txt", "wb");
	if (ptr == NULL)
	{
		printf("Error");
		exit(1);
	}
	int x;
	scanf("%d", &x);

	fwrite(&x, sizeof(int), 1, ptr);
	fclose(ptr);
	int y;
	ptr = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\input.txt", "rb");
	fread(&y, sizeof(x), 1, ptr);
	printf("%d", y);
	fclose(ptr);
}