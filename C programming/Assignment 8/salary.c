#include<stdio.h>

void Salary(float *basic);
void main()
{
    float basic;
    printf("Enter basic salary: ");
    scanf("%f",&basic);

    Salary(&basic);
}

void Salary(float *basic)
{
    float da,ta,hra,total_salary;

    if(*basic <= 5000)
    {
        da = (*basic) * 0.10;
        ta = (*basic) * 0.20;
        hra = (*basic) * 0.25;
    }
    else
    {
        da = (*basic) * 0.15;
        ta = (*basic) * 0.25;
        hra = (*basic) * 0.30;
    }

    total_salary = *basic + da + ta + hra;

    printf("DA: %.2f\n", da);
    printf("TA: %.2f\n", ta);
    printf("HRA: %.2f\n", hra);
    printf("Total Salary: %.2f\n",total_salary);
}
