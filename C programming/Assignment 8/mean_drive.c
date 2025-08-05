#include<stdio.h>

void isMenDrivePro(int *num);
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    isMenDrivePro(&num);
}

void isMenDrivePro(int *num)
{
    int option;
    while(1)
	{
        printf("\nMenu:\n");
        printf("1. Check Even or Odd\n");
        printf("2. Check Prime or Not\n");
        printf("3. Check Palindrome or Not\n");
        printf("4. Check Positive, Negative or Zero\n");
        printf("5. Reverse the Number\n");
        printf("6. Find Sum of Digits\n");
        printf("0. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &option);

        if(option == 1)
		{
            if(*num % 2 == 0)
                printf("%d is Even.\n",*num);
            else
                printf("%d is Odd.\n",*num);

        } else if(option == 2)
		{
            if(*num <= 1)
			{
                printf("%d is not a Prime number.\n",*num);
            }
			else
			{
                int i,flag = 0;
                for(i=2; i<=*num/2; i++)
				{
                    if(*num % i == 0)
					{
                        flag = 1;
                        break;
                    }
                }
                if(flag == 0)
                    printf("%d is a Prime number \n",*num);
                else
                    printf("%d is not a Prime number \n",*num);
            }
        }
		else if(option == 3)
		{
            int temp = *num, reverse = 0,digit;
            while(temp != 0)
			{
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /= 10;
            }
            if (reverse == *num)
                printf("%d is a Palindrome \n",*num);
            else
                printf("%d is not a Palindrome \n",*num);

        }
		else if(option == 4)
		{
            if(*num > 0)
                printf("%d is Positive \n",*num);
            else if(*num < 0)
                printf("%d is Negative \n",*num);
            else
                printf("Number is Zero \n");

        }
		else if(option == 5)
		{
            int temp = *num,reverse = 0,digit;
            while (temp != 0)
			{
                digit = temp % 10;
                reverse = reverse * 10 + digit;
                temp /= 10;
            }
            printf("Reverse of %d is %d\n",*num,reverse);

        }
		else if(option == 6)
		{
            int temp = *num, sum = 0, digit;
            if(temp < 0) temp = -temp;
            while(temp != 0)
			{
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            printf("Sum of digits of %d is %d\n",*num,sum);

        }
		else if(option == 0)
		{
            printf("Exiting program \n");
            break;

        }else
		{
            printf("Invalid option. Try again \n");
        }
    }
}
