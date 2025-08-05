#include<stdio.h>

void checkChar(char *ch);
void main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    checkChar(&ch);
}

void checkChar(char *ch)
{
    char c = *ch;

    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        printf("Character is a Vowel \n");
    }
    else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Character is a consonant \n");
    }
    else if(c >= '0' && c <= '9')
    {
        printf("Character is a digit \n");
    }
    else
    {
        printf("Character is a special symbol \n");
    }
}
