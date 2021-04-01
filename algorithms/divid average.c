#include <stdio.h>
#include <stdlib.h>

int avg(int in, int end, int* a){
    if ((end - in) == 0){
        return a[end];
    }
    return (avg(in, ((end - in)/2)-1, a) + avg((end - in)/2, end, a));
}

int main(){
    int a,*b,i;
    printf("Please say how long the array is going to be: ");
    scanf("%d",&a);
    b = (int*)malloc(sizeof(int) * a);
    if (b){
        for(i=0; i<a; ++i){
            printf("Please enter the element number %d of the array: ", i+1);
            scanf("%d",&b[i]);
        }
        printf("The array is:\n\n{\n");
        for(i=0; i<a; ++i){
            printf(" %d\n", b[i]);
        }
        printf("}\n\n");
        printf("The array's average is : %d", avg(0, a-1,b));
    }
    else{
        printf("Sorry, but an array of that size can't be created!\n");
    }

    return 0;
}
