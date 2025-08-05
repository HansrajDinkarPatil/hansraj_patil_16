#include<stdio.h>

void getArmstrong(int*n);

void main()
{
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    getArmstrong(&num);
}

void getArmstrong(int *n)
{
    int temp = *n,r,arm = 0,num = *n;
    while (num > 0)
	{
        r = num % 10;
        arm += (r * r * r);
        num = num / 10;
    }

    if(temp == arm)
        printf("%d is an Armstrong number\n",*n);
    else
        printf("%d is NOT an Armstrong number\n",*n);
}
