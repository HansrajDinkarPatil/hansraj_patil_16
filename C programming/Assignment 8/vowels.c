#include<stdio.h>

void countVowels(char *arr,int size)
{
    int count = 0,i;
    for (i=0; i<size; i++)
	{
        char ch = *(arr+i);
        if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
            ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			{
            count++;
        }
    }
    printf("Number of vowels: %d\n",count);
}

void main()
{
    char arr[100];
    int i = 0,ch;
    printf("Enter characters (end with #):\n");

    while((ch = getchar()) != '#' && i < 100)
	{
        arr[i] = ch;
        i++;
    }
    countVowels(arr,i);
}
