#include<stdio.h>

void main()
{
	int n,i,tamp,digit,sum;
	
	printf("enter the number");
	scanf("%d",&n);
	
	printf("strong number 1 to %d \n",n);
	
	for(i=1;i<=n;i++)
	{
		tamp =i;
		sum=0;
		
		while(tamp>0)
		{
			digit+tamp%10;
			sum=digit;
			tamp=tamp/10;
		}
		if(sum==i)
		{
			printf("%d",n);
		}
	}
}