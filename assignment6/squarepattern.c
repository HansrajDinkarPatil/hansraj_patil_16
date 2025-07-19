#include<stdio.h>
void main()
{
	int i;
	for (i<1;i<=4;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(i==i||i==4||j==i||j==20)
			printf("* ");
		else	
			printf(" ");
		}
		
		{
		   printf("\n");	
		}
		
	}
	
}