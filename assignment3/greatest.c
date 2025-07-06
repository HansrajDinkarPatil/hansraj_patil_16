#include<stdio.h>
void main()
{
	int a , b, c;
	printf("enter the three number");
	scanf("%d,%d,%d", &a,&b,&c);
	
	if (a>b)
	{
		if (a>c)
		
		printf("gretest number is:",a);
		
		else
		
		printf("greatest number is:",c);

	}
	
	
	else 
	{
		if (b>c)
		
		printf("greatest number is :%d",b);
		
		else
		
		printf("greatest number is :%d",c);
	}
}