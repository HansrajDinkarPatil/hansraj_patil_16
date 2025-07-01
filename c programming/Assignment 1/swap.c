#include<stdio.h>
void main()
{
	int a=10,b=20;
	int temp;
	temp=a;
	a=b;
	b=temp;
	
	printf("temp of %d and %d",a,b);
}