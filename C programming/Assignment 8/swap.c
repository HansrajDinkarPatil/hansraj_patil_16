#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

void add(int*a,int*b)
{
    printf("Sum = %d\n",*a+*b);
}

void findMax(int *a,int *b)
{
    if (*a>*b)
        printf("Maximum = %d\n",*a);
    else
        printf("Maximum = %d\n",*b);
}

void updateValue(int *x, int newValue)
{
    *x=newValue;
    printf("Value updated to %d\n",*x);
}

void main()
{
    int num1=10,num2=20;

    printf("Original numbers: num1 = %d, num2 = %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After swap: num1 = %d, num2 = %d\n",num1,num2);

    add(&num1,&num2);

    findMax(&num1,&num2);

    updateValue(&num1,100);

}
