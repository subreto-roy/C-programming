#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *p1,*p2;
	p1=fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\files Problems\\SampleOutputSub.pdf", "rb");
	//p2 = fopen("C:\\Users\\NCM.SUBROTO-ROY\\Desktop\\ProgramPrac\\VS Code\\Class\\Class\\Files Problems\\SampleOutputSub.pdf", "wb");
	if (p1 == NULL)
	{
		printf("Error");
		exit(1);
	}
	int ar[50],i;
	/*for (i = 0; i < 5; i++)  
	{
		scanf("%d", &ar[i]);
	}*/


	/*for (i  = 0; i < 5; i++)
	{
		if ((fread(&ar[i], sizeof ar[i], 1, p1))!=1)
		{
			printf("Write error failed\n");
			break;
		}
	}*/


	fread(&ar, sizeof ar, 1, p1);

	for (i = 0; i < 5; i++)
	{
	printf("%d ", ar[i]);
	}
	fclose(p1);

}