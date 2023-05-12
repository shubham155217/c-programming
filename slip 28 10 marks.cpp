//
// Write a menu driven C program to perform the following operations 
//on strings using standard library functions: 
//a. Convert string to lowercase 
//b. Compare two strings 
#include<stdio.h>
#include<string.h>
int main()
{   int ch,k;
	char s1[20],s2[20];
	printf("enter string 1::");
	gets(s1);
	printf("\n enter string 2::");
	 gets(s2);
	printf("\n 1:lowercase\n2:compare\n");
do{
	printf("\nenter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:printf("lowercase string=%s",strlwr(s1));
		      break;
	    case 2: 
	          k=strcmp(s1,s2);
	          if(k==1)
	          printf("string 1 is greater");
	          else if(k==-1)
	          printf("\nstring 2 is greater:");
	          else 
	          printf("\n strings are equal:");
	          break;
	}
}while(ch<3);
	
	
}