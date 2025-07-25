#include<stdio.h>
void main()
{
	
	int arr[5],brr[5]; 

	
	printf("\n enter 5 element arr");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("\n enter 5 element brr ");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&brr[i]);
	}
	

		printf( " \n comman element are:\n");
		for(int i= 0;i < 5;i++)

		{
			for(int j = 0; j < 5;j++)
			{
		    	 if (arr[i] == brr[j])
				{
					printf("%d",arr[i]);
					
				}
			}
		}
}
