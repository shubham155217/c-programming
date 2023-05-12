#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter string::");
	gets(s1);
	
	for(i=0,j=0;s1[i]!='\0';i=i+2,j++)
	{
	     	s2[j]=s1[i];	
		
	}
	s2[j]='\0';
	
	printf("copied string=%s",s2);
}