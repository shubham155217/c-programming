#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],ch;
	int i,n;
	printf("enter string::");
	gets(s1);
	printf("\nenter character..:");
	scanf("%c",&ch);
	printf("\nenter position..:");
    scanf("%d",&n);
    for(i=0;s1[i]!='\0';i++);
    for(i;i>=n;i--)
    {
    	s1[i+1]=s1[i];
	}
	s1[n]=ch;
	printf("\n new string=%s",s1);
}