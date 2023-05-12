#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main()
{
	FILE *fp1;
	int c1=0,c2=0,c3=0;
	char ch;
	fp1=fopen("f2.txt","r");
	if(fp1==NULL)
	{
		printf("file not found");
	}
	while(!feof(fp1))
	{
		ch=fgetc(fp1);
		if(isalpha(ch))
		c1++;
		else if(ch==' '||ch=='\t')
		c2++;
		else if(ch=='\n')
		c3++;
		
	}
	fclose(fp1);
	printf("\ncount characters=%d",c1);
	printf("\ncount space=%d",c2);
	printf("\ncount new line=%d",c3);

}