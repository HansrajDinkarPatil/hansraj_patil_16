#include <stdio.h>
#include <string.h>


void reverseString(char str[]) 
{
    int i, j;
    char temp;
    int length = strlen(str);

    for(i = 0, j = length - 1; i < j; i++, j--) 
	{
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void main() 
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);  

    reverseString(str); 

    printf("Reversed string: %s\n", str);


}
