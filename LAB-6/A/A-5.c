#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5,pr;

	printf("Enter marks for sub1:");
	scanf("%f",&sub1);
	printf("Enter marks for sub2:");
	scanf("%f",&sub2);
	printf("Enter marks for sub3:");
	scanf("%f",&sub3);
	printf("Enter marks for sub4:");
	scanf("%f",&sub4);
	printf("Enter marks for sub5:");
	scanf("%f",&sub5);
	pr=((sub1+sub2+sub3+sub4+sub5)/5);
	if(36<=pr && pr<=45)
	{
		printf("Pass");
	}
	else if(46<=pr && pr<=60)
	{
		printf("Second class");
	}
	else if(61<=pr && pr<=70)
	{
		printf("First class");
	}
	else if(pr>70)
	{
		printf("Distinction");
	}
	else
	{
		printf("Fail");
	}
}
