#include<stdio.h>
void main()
{
	int hours;
    int min;
	int sec;
	int total_sec;
	
	
	printf("enter the hours");
	scanf("%d",&hours);
	
	printf("enter the min");
	scanf("%d",&min);
	
	printf("enter the sec");
	scanf("%d",&sec);
	
   total_sec=(hours*3600)+(min*60)+sec;
  
   
   printf("total sec  %d",total_sec);
   	
}