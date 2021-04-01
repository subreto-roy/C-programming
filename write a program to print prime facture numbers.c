#include<stdio.h>
int main()
{
    int num,j,i,flag=0;
    scanf("%d",&num);

    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            flag=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    flag=1;
                }
            }
            if(flag==0 && i!=1)
            {
                printf("%d ",i);
            }
        }
    }

}

