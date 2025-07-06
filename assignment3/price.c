#include <stdio.h>

void main() 
{
    float price,discount;
    char Student;
   
   
    printf("Enter the price: ");
    scanf("%f", &price);

    
    printf("Are you a student? (y/n): ");
    scanf(" %c", &Student); 

    
    if (Student == 'y' || Student == 'Y') 
        if (price > 500) 
            discount = 20;
        else 
            discount = 10;
        
     else 
        if (price > 600) 
            discount = 15;
        else 
            discount =0;
        
    

    
    price = price - (price * discount / 100);


    printf("Discount applied: %.2f%\n", discount);
    printf(" price after discount: %.2f\n",  price);
}
