#include <stdio.h>

float balance = 5000;  

void deposit(float amount)
{
    balance += amount;
    printf("Deposit successful. Updated balance = %.2f\n", balance);
}

void withdraw(float amount)
{
    if (balance < 3000)
    {
        printf("Cannot withdraw. Balance is below ?3000.\n");
    }
    else if (amount > balance)
    {
        printf("Cannot withdraw. Amount exceeds balance.\n");
    }
    else
    {
        balance -= amount;
        printf("Withdrawal successful. Updated balance = %.2f\n", balance);
    }
}

void main()
{
    int choice;
    float amount;

    printf("Initial balance = %.2f\n", balance);
    printf("1. Deposit\n2. Withdraw\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter amount to deposit: ");
        scanf("%f", &amount);
        deposit(amount);
    }
    else if (choice == 2)
    {
        printf("Enter amount to withdraw: ");
        scanf("%f", &amount);
        withdraw(amount);
    }
    else
    {
        printf("Invalid choice.\n");
    }
}
