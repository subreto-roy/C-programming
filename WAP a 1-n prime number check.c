#include<stdio.h>
int main()
{
    int flag=0,num,i,j;
    scanf("%d",&num); //10
    for(i=1;i<=num;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }

        if(flag==0 && i!=1)
        {
            printf("%d ",i);
        }
    }
}
