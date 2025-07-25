#include<stdio.h>
void main()
{
	int a,b,no;
	char op;
	printf("enter a number =");
	scanf("%d",&a);
	fflush(stdin);
	printf("enter a opreter =");
	scanf("%c",&op);
	fflush(stdin);
	printf("enter a number =");
	scanf("%d",&b);
	
	if (op=='+')
		no=a+b;
	else if(op='-')
			no=a-b;
		else if(op=='*')
				no=b*a;
			else
				no=a/b;		
	
	printf("total result = %d",no);
	
	
}