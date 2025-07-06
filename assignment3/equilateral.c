#include<stdio.h>
void main()
{
	int s1,s2,s3;
	if(s1==s2&&s2==s3)
	{
		printf("is equilateral");
	
	}
	else if(s1==s2||s1==s3||s2==s3)
	{
		printf(" is isosceles");

	}
	else
	{
	    printf("is scalene");
	}
	
}