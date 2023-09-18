#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter number A:");
    scanf("%d",&a);
    printf("Enter number B:");
    scanf("%d",&b);
    printf("Enter number C:");
    scanf("%d",&c);
    if(a>=b &&a <=c)
    {
        printf("a is second largest number");
    }
    else if(b>=a && b<=c)
    {
        printf("b is second larget number");
    }
    else if(c>=a && c<=b)
    {
        printf("c is  second largest number");
    }
    else
    {
        printf("ERROR");
    }
}
