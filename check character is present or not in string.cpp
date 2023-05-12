#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],ch;
	int i,f=1;
	printf("\nenter string 1..:");
	gets(s1);
	printf("\nenter character..:");
	scanf("%c",&ch);
	for(i=0;s1[i]!='\0';i++)
	{
		if(s1[i]==ch)
	  {
	  		printf("character is present");
	  		return 0;
	  }
		
	}
		printf("character is not present");
}