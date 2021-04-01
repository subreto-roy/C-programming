#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[100],n,i,j;
    int dif=INT_MAX;
    scanf("%d",&n);
    for(i=0; i<n; i++);
    {
        scanf("%d",&ar[i]);
    }

    for( i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
                if(abs(ar[i]-ar[j])<dif)
                dif=abs(ar[i]-ar[j]);
        }
    }
    printf("%d",dif);




}
