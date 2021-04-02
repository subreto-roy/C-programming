#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int i, j, k, len,count=0,maxcount=0,fp,lp,st,end;
	gets_s(str);
	len = strlen(str);
	str[len] = ' ';
	for (i = 0,st=0, j = 0; i <= len; i++)
	{
		if (str[i] == ' ')
		{
				end = i - 1;
				count = 0;
			/*for (k = st; k <= end; k++)
			{
				count++;
			}*/

				count = (end - st) + 1;
			if (maxcount < count)
			{
				maxcount = count;
				fp = st;
				lp = end;

			}
			st = i + 1;
		}
	}
	for (i = fp; i <= lp; i++)
	{
		printf("%c", str[i]);
	}
	return 0;
}