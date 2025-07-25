#include <stdio.h>
#include<string.h>
char* myStrncat(char*, char*);
int main()
{
    char str[20] = "Hi";
    myStrncat(str,"there" );

    printf("strncat : %s\n", str); 
    return 0;

    
}

char* myStrncat(char* dest, char* src)
{
    int i = 0, j = 0;

    
    while (dest[i] != '\0')
        i++;

   
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }

   
    dest[i] = '\0';
     return dest;
}
