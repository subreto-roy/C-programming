/*#include<stdio.h>

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
*/

/*#include<stdio.h>

int main()
{
	int i, j, firstPos, secondPos;
	char str[100], str2[100];
	printf("Enter string: \n");
	gets_s(str);
	printf("Enter first position: \n");
	scanf("%d", &firstPos);
	printf("Enter second position: \n");
	scanf("%d", &secondPos);

	for (i = 0; i<firstPos; i++)
	{
		str2[i] = str[i];
	}
	str2[i] = '\0';
	for (i = i, j = secondPos + 1; str[j] != '\0'; i++, j++)
	{
		str2[i] = str[j];
	}
	str2[i] = '\0';
	printf("%s", str2);
	return 0;
}*/

#include<stdio.h>

int main()
{
    int i,j,len=0;
    char str1[100],str2[100];
    gets(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        len++;
    }

    for(i=len-1,j=0;str1[i]!='\0';i--,j++)
    {
        str2[j]=str1[i];
    }
    str2[j]='\0';
    printf("Reverse: %s\n",str2);
    return 0;
}

/*#include<stdio.h>

int main()
{
	int i;
	char str1[100];
	gets(str1);

	for (i = 0; str1[i] != '\0'; i++)
	{
		if (str1[i] >= 'a' && str1[i] <= 'z')
		{
			str1[i] = str1[i] - 32;
		}
		else if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] = str1[i] + 32;
		}
	}
	str1[i] = '\0';
	printf("After toggling: %s\n", str1);
	return 0;
}
*/
/*#include<stdio.h>

int main()
{
	int i = 0, j = 0;
	char arr1[100], arr2[100];
	printf("Enter the String: \n");
	gets(arr1);

	while (arr1[i] != '\0')  //determine array1 length
	{
		i++;
	}

	while (i > 0)  //reverse array1 and stored to array2
	{
		arr2[j] = arr1[--i];
		++j;
	}
	arr2[j] = '\0';

	printf("Reverse string: \n");

	for (i = 0; arr2[i] != '\0'; i++)
	{
		if (arr2[i + 1] == ' ' || arr2[i + 1] == '\0')
		{
			for (j = i; j >= 0 && arr2[j] != ' '; j--)
			{
				printf("%c", arr2[j]);
			}
			printf(" ");
		}
	}


	return 0;
}
*/

/*#include<stdio.h>
void sampleFunction(char ch);
int main()
{
	char ch;
	scanf("%c", &ch);
	sampleFunction(ch);
	return 0;
}

void sampleFunction(char ch)
{
	printf("Value received from main: %c\n", ch);
}
*/
/*#include<stdio.h>

int main()
{
	int i, n, r, arr[100];
	printf("How many numbers: \n");
	scanf("%d", &n);
	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	r = sum(arr, n);
	printf("Sum in main: %d\n", r);
	return 0;
}

int sum(int arr[], int n)
{
	int i, sum = 0;
	for (i = 0; i<n; i++)
	{
		sum = sum + arr[i];
	}
	printf("Sum in function: %d\n", sum);
	return sum;
}
*/
/*#include<stdio.h>

void multiplyArray(int arr[], int n);

int main()
{
	int i, n, arr[100];
	scanf("%d", &n);

	for (i = 0; i<n; i++)
	{
		scanf("%d", &arr[i]);
	}
	multiplyArray(arr, n);
	printf("After multiplying by 2: \n");
	for (i = 0; i<n; i++)
	{
		printf("%d ", arr[i]);
	}
}


void multiplyArray(int arr[], int n)
{
	int i;

	for (i = 0; i<n; i++)
	{
		arr[i] = arr[i] * 2;
	}
}
*/
/*#include<stdio.h>

int isPrime(int n);

int main()
{
	int n, result;
	scanf("%d", &n);

	result = isPrime(n);
	if (result == 0)
	{
		printf("Prime");
	}
	else
	{
		printf("Not prime\n");
	}


}

int isPrime(int n)
{
	int i, flag = 0;

	for (i = 2; i<n; i++)
	{
		if (n%i == 0)
		{
			flag = 1;
			break;
		}
	}
	return flag;
}
*/
/*#include<stdio.h>
int GCD(int n1, int n2);
int LCM(int n1, int n2);
int main()
{
	int n1, n2, result;
	scanf("%d%d", &n1, &n2);
	result = GCD(n1, n2);
	printf("GCD: %d\n", result);
	result = LCM(n1, n2);
	printf("LCM: %d\n", result);
	return 0;
}

int GCD(int n1, int n2)
{
	int i, gcd;
	for (i = 1; i <= n1 && i <= n2; i++)
	{
		if (n1%i == 0 && n2%i == 0)
		{
			gcd = i;
		}
	}
	return gcd;
}

int LCM(int n1, int n2)
{
	int lcm;

	lcm = (n1*n2) / GCD(n1, n2);
	return lcm;
}
*/


