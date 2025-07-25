#include <stdio.h>
void main()
{
	int no=121,d1,d2,d3,rev;
	
	d1=no/100;
	d2=(no/10)%10;
	d3=no%10;
	rev=d3*100+d2*10+d1;
	if(no==rev)
	
	 
	
	{
	   printf("no is pallindrome");
	}
	else
	{
	  	printf("no is not pallindrome");
    }
}