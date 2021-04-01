#include<stdio.h>
int ar[100];
struct Pair
{

    int max;
    int min;

};
int max(int a,int b){
    if(a>b){
        //return a;
        printf("%d",a);
        return a;
    }
    else
       {

        //return b;
        printf("%d",b);
        return b;}
}
int min(int a,int b)
{

    if(a<b)
        //return a;
        {printf("%d",a);
        return a;}
    else
      // return b;
     {

     printf("%d",b);
      return b;}
}

struct Pair Rminmax(int i,int j){
    int mid;
    struct Pair x;
    struct Pair g;
    struct Pair h;
    struct  Pair stor;
    if(i==j){
        x.max=ar[i];
        x.min=ar[i];
    }
    else if(i==j-1){
        if(ar[i]>ar[j]){
            x.max=ar[i];
            x.min=ar[j];
        }
        else{
            x.max=ar[j];
            x.min=ar[i];
        }
    }
    else{
        mid=(i+j)/2;
        g=Rminmax(i,mid);
        h=Rminmax(mid+1,j);

        x.max=max(g.max,h.max);
        x.min=min(g.min,h.min);


    }
    return x;
};
int main()
{
   int size;
   scanf("%d",&size);
   for(int i=0;i<size;i++){
    scanf("%d",&ar[i]);
   }
   struct Pair output=Rminmax(0,size-1);
   printf("max Value=%d\n",output.max);
   printf("min Value=%d\n",output.min);
}

