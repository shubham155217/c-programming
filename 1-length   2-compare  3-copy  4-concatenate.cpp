#include<stdio.h>
#include<string.h>
int main()
{  
    int ch,k;
	char s1[20],s2[20];
	printf("\n1-length\n2-compare\n3-copy\n4-concatenate\n");
	printf("enter string1::");
	gets(s1);
	printf("\nenter string 2::");
	gets(s2);

do{
	printf("\nenter choice..:");
	scanf("%d",&ch);
    switch(ch)
	{
     case 1:printf("\nlength of string 1 ::%d",strlen(s1));
              printf("\nlength of string 2 ::%d",strlen(s2));
              break;
	 case 2:k=strcmp(s1,s2);
	         if(k>0)
			 printf("\nstring 1 is greater ");
			 else if(k<0)
			 printf("\nstring 2 is greater");
			 else
			 printf("\nstring are same");
			 break;
	case 3:	strcpy(s1,s2);
           	printf("\nstring 1::%s",s1);
        	printf("\nstring 2..::%s",s2);		
			break;  
    case 4:strcat(s1,s2);
             printf("\nstring 1::%s",s1);
             printf("\nstring 2::%s",s2);
             break;
    default:printf("\n enter valid choice"); 
    } 
 }while(ch<5);
}