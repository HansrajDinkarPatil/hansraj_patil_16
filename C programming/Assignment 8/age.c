#include<stdio.h>

void Age(int *age);
void main()
{
    int age;
    printf("Enter the age: ");
    scanf("%d",&age);
    Age(&age);
}

void Age(int *age)
{
    if (*age < 12)
        printf("Child\n");
    else if (*age >= 12 && *age <= 19)
        printf("Teenager\n");
    else if (*age >= 20 && *age <= 59)
        printf("Adult\n");
    else
        printf("Senior\n");
}
