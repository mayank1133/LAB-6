#include<stdio.h>
#include<math.h>
void main()
{
	double d,x1,x2,x;
	double a,b,c;
	printf("the equation is = ax^2+bx+c:\n");
	printf("Enter the value of a:");
	scanf("%lf",&a); 
	printf("Enter the value of b:");
	scanf("%lf",&b);
	printf("Enter the value of c:");
	scanf("%lf",&c);  
	d=(b*b)-(4*a*c);
	if(d==0)
	{
	printf("This EQ has 1 real root");
	x=-c/b;
	printf("root of x:%lf",x);
    }
    else if(d>0)
    {
    	printf("This EQ has 2 real roots\n");
    	x1=(-b+pow(d,1/2))/2*a;
    	x2=(-b-pow(d,1/2))/2*a;
    	printf("x1=%lf\n",x1);
    	printf("x2=%lf",x2);
	}
	else if (d<0)
	{
	    printf("This EQ has no real root");
    }
}
