#include<stdio.h>
void main()
{
	float hight=10, base=5;
	float area;
	
	
	printf("enter the hight : ");
	scanf("%f",&hight);
	
	printf("enter the base :");
	scanf("%f",&base);
	
	area= 0.5 * hight*base;
	
	printf("area is tranagle %2f\n",area);
	
}