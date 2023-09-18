include<stdio.h>
void main()
{
	double BS,HRA,DA,TS;

	printf("Enter the BS:");
	scanf("%lf",&BS);

	if(BS>=10000)
	{
		HRA=BS*20/100;
		DA=BS*80/100;

	}
	else if(BS>=20000)
	{
	    HRA=BS*25/100;
		DA=BS*90/100;

	}
	else if(BS>=30000)
	{
	HRA=BS*30/100;
		DA=BS*95/100;

	}
	TS=BS+HRA+DA;
		printf("TS=%lf",TS);

}
