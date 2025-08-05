#include<stdio.h>

void findMax(int *a,int *b)
{
    if(*a > *b)
    printf("Maximum: %d\n",*a);
    else
    printf("Maximum: %d\n",*b);
}

void main()
{
    int x = 55,y = 25;
    findMax(&x,&y);
}
