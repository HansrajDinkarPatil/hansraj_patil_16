#include <stdio.h>

void getLeapYear(int *year);
void main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d",&year);
    getLeapYear(&year);
}

void getLeapYear(int *year)
{
    if((*year % 4 == 0 && *year % 100 != 0) || (*year % 400 == 0))
	{
        printf("%d is a Leap Year\n",*year);
    } else
	{
        printf("%d is NOT a Leap Year\n",*year);
    }
}
