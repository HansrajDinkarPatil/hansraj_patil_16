#include <stdio.h>

void main()
 {
    int choice, num, i, rev = 0, sum = 0, temp, digit, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nMenu:\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse the Number\n");
    printf("6. Find Sum of Digits\n");

    printf("Enter your choice (1-6): ");
    scanf("%d", &choice);

    
	 {
    
            if(num % 2 == 0)
                printf("The number is Even.\n");
            else
                printf("The number is Odd.\n");
        

        
            if(num <= 1)
                isPrime = 0;
            else {
                for(i = 2; i <= num / 2; i++) 
				{
                    if(num % i == 0)
					 {
                        isPrime = 0;
                        
                    }
                }
            }
            if(isPrime)
                printf("The number is Prime.\n");
            else
                printf("The number is Not Prime.\n");
            

        
            temp = num;
            while(temp > 0) 
			{
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            if(rev == num)
                printf("The number is a Palindrome.\n");
            else
                printf("The number is Not a Palindrome.\n");
            


            if(num > 0)
                printf("The number is Positive.\n");
            else if(num < 0)
                printf("The number is Negative.\n");
            else
                printf("The number is Zero.\n");
            

        
            temp = num;
            rev = 0;
            while(temp != 0)
			{
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            printf("The reversed number is: %d\n", rev);
            

        
            temp = num;
            sum = 0;
            while(temp != 0) 
			{
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            printf("Sum of digits is: %d\n", sum);
            

        
            printf("Invalid choice!\n");
    }
}
