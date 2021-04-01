#include<stdio.h>
#include<math.h.
int main()
{
    int num,rem,sum,cube,temp=num;
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        cube=pow(num,rem);
        num=num/10;
    }
    if(temp==num)
        printf("palindrome");
    else
        printf("not ");

}
