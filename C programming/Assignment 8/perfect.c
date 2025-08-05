#include<stdio.h>

void getPerfectNum(int *n);
void main()
{
    int num;
    printf("Enter the num: ");
    scanf("%d", &num);
    getPerfectNum(&num);
}

void getPerfectNum(int *n)
{
    int a = 1, sum = 0;
    int num = *n;

    while(a < num)
    {
        if(num % a == 0)
        {
            sum += a;
        }
        a++;
    }

    if(sum == num)
        printf("Perfect num\n");
    else
        printf("Not perfect num\n");
}
