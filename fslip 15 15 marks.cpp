#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
  FILE *fp1,*fp2;
  char ch;
  fp1=fopen("f2.txt","r");
  fp2=fopen("f3.txt","w");
  if(fp1==NULL)
  {
  	printf("file not found:");
  	
	  }
	  while(!feof(fp1))	
	  {
	  	ch=fgetc(fp1);
	     if(islower(ch))
	   {
	  	fputc(toupper(ch),fp2);
	     }
	  	else if(islower(ch))
	  	{
	  		fputc(tolower(ch),fp2);
	  		
		  }
		  else if(isdigit(ch))
		  {
		  	fputc('*',fp2);
		  }
	  }
}