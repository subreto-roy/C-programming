#include <stdio.h>
#include<stdlib.h>

int main()
{

	FILE *fptr1, *fptr2;
	fptr1 = fopen("C:\\Users\\Kawser Ahmed\\Desktop\\str1.txt", "a");
	fptr2 = fopen("C:\\Users\\Kawser Ahmed\\Desktop\\str2.txt", "r");


	if (fptr1 == NULL || fptr2 == NULL)
	{
		printf("Error!");
		exit(1);
	}
	//    int x;
	//    while(1)
	//    {
	//        x=fgetc(fptr2);
	//        if(x==EOF)
	//            break;
	//        fputc(x,fptr1);
	//    }

	//        char str[1000];


	//       while(!feof(fptr2))
	//       {
	//           fgets(str,100,fptr2);
	//            fputs(str,fptr1);
	//
	//       }
	//       printf("%s",str);

	//    int x;
	//    while(1)
	//    {
	//        x=fgetc(fptr2);
	//        if(x==EOF)
	//        break;
	//        fputc(x,fptr1);
	//
	//    }



	char str[1000];
	int i = 0, x;

	while (1)
	{
		x = fgetc(fptr2);
		if (x == EOF)
			break;
		str[i] = x;
		i++;
	}
	str[i] = '\0';
	puts(str);


	fclose(fptr1);
	fclose(fptr2);
	return 0;
}