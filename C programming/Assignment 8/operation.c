#include<stdio.h>

void Operation(int *no1,int *no2,char *op);
void main()
{
    int no1,no2;
    char op;

    printf("Enter the First number: ");
    scanf("%d",&no1);

    printf("Enter the Second number: ");
    scanf("%d",&no2);

    printf("Enter the operator (+, -, *, /, %%): ");
    scanf(" %c",&op);

    Operation(&no1, &no2, &op);
}

void Operation(int *no1,int *no2,char *op)
{
    if(*op == '+')
	{
        printf("Result: %d\n",*no1 + *no2);
    }
	else if(*op == '-')
	{
        printf("Result: %d\n",*no1 - *no2);
    }
	else if(*op == '*')
	{
        printf("Result: %d\n",*no1 * *no2);
    } else if(*op == '/')
	{
        if(*no2 != 0)
            printf("Result: %d\n",*no1 / *no2);
        else
            printf("Error: Division by zero not allowed \n");
    }
	else if(*op == '%')
	{
        if(*no2 != 0)
            printf("Result: %d\n", *no1 % *no2);
        else
            printf("Error: Modulo by zero not allowed \n");
    }
	else
	{
        printf("Invalid operator! \n");
    }
}
