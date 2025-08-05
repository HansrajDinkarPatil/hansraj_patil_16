#include<stdio.h>

void Voting(int *age);
void main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);

    Voting(&age);
}

void Voting(int *age)
{
    if(*age >= 18)
    {
        printf("Eligible for the vote\n");
    }
    else
    {
        printf("Not Eligible for the vote\n");
    }
}
