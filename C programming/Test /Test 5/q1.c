#include<stdio.h>

void main()
{
    float costprice, discount, sellingprice;

    printf("Enter the book cost price: ");
    scanf("%f", &costprice);

    printf("Enter the discount (in percentage): ");
    scanf("%f", &discount);

    if (costprice >= 0)
    {
        if (discount >= 0 && discount <= 100)
        {
            sellingprice = costprice - (costprice * discount / 100);
            printf("Selling price of book = %.2f\n", sellingprice);
        }
        else
        {
            printf("Invalid Discount! It should be between 0 and 100.\n");
        }
    }
    else
    {
        printf("Invalid Cost Price! It should be greater than or equal to 0.\n");
    }
}
