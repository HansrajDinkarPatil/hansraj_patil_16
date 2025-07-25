#include<stdio.h>
#include<string.h>
int main()
{    
    char str1[]="Hello";
    char dest[20];
    strcpy(dest,str1); 
    
    printf("1. strcpy: %s\n", dest);
    
    return 0;
    

}