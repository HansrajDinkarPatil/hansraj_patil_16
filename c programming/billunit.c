#include<stdio.h>

void main()
{
	int unit;
	float bill;
	
	printf("Enter the units: ");
	scanf("%d", &unit);
	
	if(unit <= 50)
	{
		bill = unit * 30;
	}
	else if(unit <= 150)
	{
		bill = (50 * 30) + (unit - 50) * 40;
	}
	else
	{
		bill = (50 * 30) + (100 * 40) + (unit - 150) * 50;
	}
	
	printf("Total electricity bill: %.2f\n", bill);
}
