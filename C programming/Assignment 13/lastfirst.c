#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int len;
    char temp;

    printf("Enter a string: ");
    gets(str);  

    len = strlen(str);

    if(len > 1) 
	{
        
        temp = str[0];
        str[0] = str[len - 1];
        str[len - 1] = temp;
    }

    printf("Modified string: %s\n", str);
    return 0;
}
