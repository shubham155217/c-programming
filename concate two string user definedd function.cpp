#include<stdio.h>
int main()
{
	char s1[20],s2[20];
	int i,j;
	printf("enter string 1..:");
	gets(s1);
	printf("enter string 2..:");
	gets(s2);
	for(i=0;s1[i]!='\0';i++);
	for(j=0;s2[j]!='\0';j++,i++)
	{
		s1[i]=s2[j];
	}
	s1[i]='\0';
	printf("\nstring 1::%s",s1);
	printf("\nstring 2::%s",s2);

}