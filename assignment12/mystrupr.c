#include <stdio.h>
#include <ctype.h>  // for toupper()

void myStrUpr(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        str[i] = toupper(str[i]); 
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    myStrUpr(str); 

    printf("Uppercase string: %s\n", str);
}
