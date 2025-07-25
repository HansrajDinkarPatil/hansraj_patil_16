#include<stdio.h>
void main()
{
	int no,i=1,count=0;
	
	
	printf("enter the number");
	scanf("%d",&no);
	
	while(i<=no)
	{
		if(no%i==0)
		{
			count++;
		}
		i++;
	}
	if(count==2)
	{
		printf("number is prime");
	}
	else
	{
		printf("number is not prime");
	}
	
	
}

