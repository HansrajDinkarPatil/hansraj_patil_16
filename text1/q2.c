#include<stdio.h>
void main()
{
	int year=2016;
	printf("enter the year");
	scanf("%d",&year);
	if((year%4==0 && year%100 !=0 )|| year&400==0 )
	{
			printf("year is leap");
	
	}
	
	else

	
	{
			printf("year is not leap");
	
	}

}