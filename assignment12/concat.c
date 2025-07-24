#include<stdio.h>
#include<conio.h>

char* myconcat(char*,char*);
void main()
{
	char str1[18]="hello";
	char str2[]=" hansraj";
	char* concat=myconcat(str1,str2);
	printf("Concat : %s",concat);
	getch();
}
char* myconcat(char* s1,char* s2)
{
	int i=0;
	while(s1[i]!='\0')
		i++;
	
	int j=0;
	while(s2[j]!='\0')	
	{
		s1[i]=s2[j];
		i++;
		j++;
	}
	s1[i]='\0';
	return s1;
}