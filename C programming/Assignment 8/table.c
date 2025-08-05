#include<stdio.h>

void getTable(int *n);
void main()
{
    int num = 5;
    getTable(&num);
}

void getTable(int *n)
{
    int i = 1;
    while(i <= 10)
    {
        printf("%d x %d = %d\n", *n, i, (*n) * i);
        i++;
    }
}
