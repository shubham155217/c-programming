//A Write a program to accept names of ‘n’ cities. Find the name of the city 
//having maximum characters.
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20][20];
	char c1[20];
	int i,n,maxlen=0;
	printf("\nenter limit:");
	scanf("%d",&n);
	printf("\n enter city names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&s1[i]);
	}

   for(i=0;i<n;i++)
   {
      	if(strlen(s1[i])>maxlen)
      	{
      		maxlen=strlen(s1[i]);
      		strcpy(c1,s1[i]);
		  }
   }
   printf("\n max character city=%s",c1);
 } 