#include<stdio.h>

void getPalindrome(int *no);
void main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    getPalindrome(&num);
}

void getPalindrome(int *no)
{
    int temp = *no,digit,rev = 0;
    while (temp > 0)
	{
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }
    printf("Reversed number: %d\n",rev);
    if (rev == *no)
	{
        printf("The number is a Palindrome \n");
    }
	else
	{
        printf("The number is NOT a Palindrome \n");
    }
}
