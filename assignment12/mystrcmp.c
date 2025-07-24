#include<stdio.h>
#include<conio.h>
int mystrcmp(char* ,char* );
int main()
{
	char s1[]="firstbit";
	char s2[]="solustion";
	int res=mystrcmp(s1,s2);
	if(res==0)
		printf("String is same");
	else
		printf("String is not same");
	getch();
}
int mystrcmp(char* h,char* p)
{
	int i=0;
	while(h[i]!='\0'&&p[i]!='\0')
	{
		if(h[i]!=p[i])
			return 1;
		i++;
	}
	if(h[i]=='\0'&&p[i]=='\0')
		return 0;
	else 
		return 1;
}