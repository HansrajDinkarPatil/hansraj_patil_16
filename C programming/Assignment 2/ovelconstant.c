#include<stdio.h>
void main()
{
	char ch ='S';
	
   
	 if  (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	 {
	 	printf("char is ovel");
	 	
	 }
	 
	 else if(ch>='a' && ch<='z'||ch>='A'&&ch<='Z')
	 {
	 	printf("char is constant");
	 }
	 
	 else
	 {
	 	printf("char is special symbolls");
	 }
	 
}