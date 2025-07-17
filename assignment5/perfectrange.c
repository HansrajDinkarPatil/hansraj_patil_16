#include<stdio.h>
void main()
{
	int n,i,j,sum;
	
	printf("enter the number");
	scanf("%d",&n);
	
	printf("perfect number 1 to %d :\n",n);
	
	for(i=1;i<=n;i++)
	{
		sum=0;
		
		for(j=1;j<=i/2;j++)
		{
			if(i%j==0)
			{
				sum+=j;
			}
			
		}
		
		if(sum==i)
		{
			printf("%d",i);
		}
	}

	
	
}