#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp1,*fp2;
	char ch;
	fp1=fopen("a1.txt","r");
	fp2=fopen("a2.txt","w");
	if(fp1==NULL)
	{
		printf("file not found:");
		
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		fputc(ch,fp2);
		
	}
	fclose(fp1);
	fclose(fp2);
	
}