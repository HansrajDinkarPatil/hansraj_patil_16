#include<stdio.h>
#include<conio.h>
void main()
{
	float celsius ,fahrenheit;
	
	printf("enter  tem  in celsius ");
	
	scanf("%f",&celsius);
	
	fahrenheit = (celsius*9/5)+32;
	printf("temperature in fahrenheit: %.2f\n",fahrenheit);
	
	getch();
	

}