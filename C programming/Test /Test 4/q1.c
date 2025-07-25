#include<stdio.h>
void main()
{
	int start;
	int end;
	int num;
	
	printf("enter the start num");
	scanf("%d",&start);
	
	printf("enter the end num");
	scanf("%d",&end);
	
	printf("enter the num");
	scanf("%d",&num);
	
    for (num=start;num<=end;num++)
    {
	
    printf("factors of %d",num); 
    
    }
    for(int i=1;i<=num;i++)

    {
    	if(num % i==0)
    	{
    		printf("%d",i);
		}
	}  
	printf("\n");  
	
	
	
	
}