#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i;
	printf("enter string1::");
	gets(s1);
	
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]=='a' ||s1[i]=='e' || s1[i]=='i'  ||s1[i]=='o'  ||s1[i]=='u' || s1[i]=='A' ||s1[i]=='E' || s1[i]=='I'  ||s1[i]=='O'  ||s1[i]=='U')
		printf("%c\t",s1[i]); 
	}
			
}