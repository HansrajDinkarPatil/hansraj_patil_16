#include<stdio.h>
void main()
{
	float sub1,sub2,sub3,sub4,sub5;
	
	float total , percentage ;
	
	printf("enter the sub1 :");
	scanf("%f",&sub1);
	
	printf("enter the sub2 :");
	scanf("%f",&sub2);
	
	printf("enter the sub3 :");
	scanf("%f",&sub3);
	
	printf("enter the sub4 :");
	scanf("%f",&sub4);
	
	printf("enter the sub5 :");
	scanf("%f",&sub5);
	
	total=sub1+sub2+sub3+sub4+sub5;
	percentage = total  /5;
	
	printf("total marks of percentage %f /n",percentage);
	
	
}