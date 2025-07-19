#include<stdio.h>
void main()
{
	int arr[10],i,num,found=0;
	
	
	printf("enter 10 element :\n");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter number to search : \n");
	scanf("%d",&num);
	
	for(i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			found=1;
			break ;
		}
		
	}
	if (found)
         printf("number is found %d postion %d \n:",num,i);
	else
        printf("number is not found =%d \n:",arr);
	
	 
	 
	 
	 
	 
}