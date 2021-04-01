#include<stdio.h>
int max(int a,int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int knapSack(int w,int wt[],int val[],int n)
{
    if(n==0||w==0)
    {

        return 0;

    }
    if(wt[n-1]>w)
    {
        return knapSack(w,wt,val,n-1);
    }
    else
        return max(val[n-1]+knapSack(w-wt[n-1],wt,val,n-1),knapSack(w,wt,val,n-1));
}
int main()
{
    int val[10],n,i,wt[10],w,res;
    printf("bag weight");
    scanf("%d",&w);
    printf("value size");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    for(i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
    res=knapSack(w,wt,val,n);
    printf("%d",res);
    return 0;

}
