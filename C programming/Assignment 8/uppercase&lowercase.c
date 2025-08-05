#include<stdio.h>

void UpperOrLower(char *ch);
void main()
{
    char ch;
    printf("Enter the Character: ");
    scanf("%c", &ch);
    UpperOrLower(&ch);
}

void UpperOrLower(char *ch)
{
    if(*ch >= 'A' && *ch <= 'Z')
    {
        printf("It is Uppercase\n");
    }
    else if(*ch >= 'a' && *ch <= 'z')
    {
        printf("It is Lowercase\n");
    }
    else
    {
        printf("It is neither uppercase nor lowercase alphabet\n");
    }
}
