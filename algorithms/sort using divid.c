#include<stdio.h>

void merge(int a[], int i1, int i2, int j1, int j2)   // i1 = low i2=mid  j1 = mid+1 j2=high
{

        int i, j, k;
        int n1 = i2;   // mid
        int n2 = j2;   // high

        int L[n1], R[n2];
        for (i = 0; i < n1; i++)
        {
            L[i] = a[i1 + i];   // left sub array
        }

        for (j = 0; j < n2; j++)
        {
            R[j] = a[j+j1+1];   // right sub array
        }

        i = 0;
        j = 0;
        k = 0;
        while (i < n1 && j < n2)  //elements in the full array
        {
            if (L[i] <= R[j])
            {
                a[k] = L[i];
                i++;
            }
            else
            {
                a[k] = R[j];
                j++;
            }
            k++;
        }
        while (i < n1)   // elements int left sub array
        {
            a[k] = L[i];
            i++;
            k++;
        }
        while (j < n2)    //elements in the right sub array
        {
            a[k] = R[j];
            j++;
            k++;
        }

}


void mergeSort(int ar[],int low,int high)
{
  if(low<high){
    int mid=low+high/2;
    mergeSort(ar,low, mid);
    mergeSort(ar,mid+1,high);


    merge(ar,low,mid,mid+1,high);
  }

}
void print(int ar[],int n)
{

    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n",ar[i]);
    }

}
int main()
{
  int array[10];
  int i, n;

  printf("Enter Your Array Size: ");
  scanf("%d",&n);

  printf("Enter Your Array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&array[i]);
  }

  mergeSort(array,0,n-1);

  print(array,n);
}
