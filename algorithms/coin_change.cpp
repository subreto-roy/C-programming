#include<bits/stdc++.h>
using namespace std;

void minCoin(int coin_value[],int coin_number, int amount)
{
    int i;
    for(i=0;i<coin_number;i++)
    {
       while(amount >= coin_value[i])
    {
      amount = amount - coin_value[i];
      printf("%d\n", coin_value[i]);
    }
    }

}
void selectionSort(int a[], int n) {
   int i, j, min, temp;
   for (i = 0; i < n - 1; i++) {
      min = i;
      for (j = i + 1; j < n; j++)
         if (a[j] > a[min])
            min = j;
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
   }
}
int main()
{
    int coin_value[10], coin_number, amount;

    printf("Enter The Change Amount: \n");
    scanf("%d",&amount);

    printf("Enter Total Num Of Coins: \n");
    scanf("%d",&coin_number);

    printf("Enter Your Coins: \n");

    int i;
    for(i=0;i<coin_number;i++)
    {
        scanf("%d",&coin_value[i]);
    }
     //sort(coin_value,coin_value+coin_number);
     selectionSort(coin_value, coin_number);
    minCoin(coin_value,coin_number,amount);
}
