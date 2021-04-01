#include<stdio.h>
#include<math.h>
int main()
{
    int i,pow=1,base,exp;
    scanf("%d %d",&base,&exp);
    for(i=1;i<=exp;i++)
    {
        pow=pow*base;

    }
printf("%d",pow);

}
