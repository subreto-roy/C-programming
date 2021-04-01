#include<stdio.h>
#include<math.h>
int main()
{
    int n,rem,digitCount=0,n1,n2,sum=0;
    scanf("%d",&n);
    n1=n;
    n2=n;
    while(n!=0)
    {
        digitCount = digitCount+1;
        n=n/10;
    }

    while(n1!=0)
    {
        rem=n1%10;
        sum= sum + pow(rem,digitCount);
        n1/=10;
    }

    if(sum==n2)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}
