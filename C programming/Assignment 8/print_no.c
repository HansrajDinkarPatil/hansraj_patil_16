#include<stdio.h>

void getPrint(int *start,int *end);
void main()
{
    int a = 1, b = 10;
    getPrint(&a,&b);
}

void getPrint(int *start,int *end)
{
    int i = *start;
    while(i <= *end)
    {
        printf("%d ", i);
        i++;
    }
    printf("\n");
}
