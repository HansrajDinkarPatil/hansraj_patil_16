#include <stdio.h>
#include <ctype.h>  // for tolower()

void myStrLwr(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) 
	{
        str[i] = tolower(str[i]);  
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    myStrLwr(str); 

    printf("Lowercase string: %s\n", str);
}
