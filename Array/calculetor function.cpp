#include<stdio.h>
int add(int n1, int n2)
{
	return n1 + n2;
	
}

int sub(int n1, int n2)
{
	return n1 - n2;
}
int multi(int n1, int n2)
{
	return n1 * n2;
}
int div(int n1, int n2)
{
	return n1 / n2;
}
 
int main()
{
	int n1, n2, choice, r;
	scanf("%d%d", &n1, &n2);
	scanf("%d", &choice);

	if (choice == 1)
	{
		r = add(n1, n2);
		printf("sum= %d\n", r);
	}
	else if (choice == 2)
	{
		r = sub(n1, n2);
		printf("sub=%d\n", r);
	}
	else if (choice == 3)
	{
		r = multi(n1, n2);
		printf("Multiplication=%d\n", r);
	}
	else if (choice == 4 && n2 != 0)
	{
		r = div(n1, n2);
		printf("Division=%f\n", r);

	}
	else
		printf("not define\n");

}