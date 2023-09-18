#include<stdio.h>
int main()
{
    int units,bill,Tax,Total_bill;
    printf("Enter the number of used units:");
    scanf("%d",&units);
    if(units<=50)
    {
        bill=units*0.50;
        printf("Bill is %d excluding tax",bill);
    }
    if(units<=150)
    {
        bill=50*0.50+(units-50)*0.75;
        printf("bill is %d excluding tax:",bill);
    }
    if(units<=250)
    {
        bill=(50*0.50)+(100*0.75)+(units-150)*1.20;
        printf("bill is %d excluding tax:",bill);
    }
    if(units>250)
    {
        bill=(50*0.50)+(100*0.75)+(100*1.20)+(units-250)*1.50;
        printf("bill is %d excluding tax:",bill);
    }
    Tax=bill*0.20;
    Total_bill=Tax+bill;
    printf("Electricity charges:%d",Total_bill);
}
