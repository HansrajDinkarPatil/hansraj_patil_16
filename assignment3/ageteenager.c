#include <stdio.h>

void main()
 {
    int age;

    
    printf("Enter the age: ");
    scanf("%d", &age);

    
    if (age < 12)
	{
        printf("The person is a Child.\n");
    }
	 else if (age >= 12 && age <= 19) 
	{
        printf("The person is a Teenager.\n");
    } 
	else if (age >= 20 && age <= 59) 
	{
        printf("The person is an Adult.\n");
    } 
	else if (age >= 60)
	 {
        printf("The person is a Senior.\n");
    } 
	else
	 {
        printf("Invalid age entered.\n");
    }
}
