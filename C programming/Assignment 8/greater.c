#include<stdio.h>

void getGreater(int *a,int *b,int *c);
void main()
{
    int a, b, c;
    printf("Enter the 3 numbers a, b, c:\n");
    scanf("%d%d%d",&a,&b,&c);
    getGreater(&a,&b,&c);
}

void getGreater(int *a,int *b,int *c)
{
    if (*a > *b)
	{
        if(*a > *c)
            printf("a (%d) is greatest\n",*a);
        else
            printf("c (%d) is greatest\n",*c);
    }
	else
	{
        if
		(*b > *c)
            printf("b (%d) is greatest\n",*b);
        else
            printf("c (%d) is greatest\n",*c);
    }
}
