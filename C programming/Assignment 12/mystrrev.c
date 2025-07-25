#include <stdio.h>
#include <string.h>
void myStrRev(char str[]) 
{
    int i, j;
    char temp;
    i = 0;
    j = strlen(str) - 1;

    while (i < j) 
	{
        
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++;
        j--;
    }
}

void main() {
    char str[100];

    printf("Enter a string: ");
    gets(str); 

    myStrRev(str);

    printf("Reversed string: %s\n", str);
}
