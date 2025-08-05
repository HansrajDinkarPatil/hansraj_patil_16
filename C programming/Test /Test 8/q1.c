#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    char userid[20], password[20];
    char validUserid[] = "admin";
    char validPassword[] = "1234";
    int randomNum, userInput;

    
    printf("Enter User ID: ");
    scanf("%s", userid);
    printf("Enter Password: ");
    scanf("%s", password);

  
    if (strcmp(userid, validUserid) == 0 && strcmp(password, validPassword) == 0) 
	{
       
        srand(time(0));
        randomNum = 1000 + rand() % 9000; 

        printf("Verification Number: %d\n", randomNum);

        
        printf("Enter the number displayed above: ");
        scanf("%d", &userInput);

        
        if (userInput == randomNum) 
		{
            printf("? Login Successful!\n");
        } 
		else
		{
            printf("? Verification Failed. Numbers do not match.\n");
        }
    } 
	else 
	{
        printf("? Invalid User ID or Password.\n");
    }

    return 0;
}
