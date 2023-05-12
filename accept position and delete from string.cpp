#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	int i,j,p;
	printf("enter string:");
	scanf("%s",&s1);
	printf("\n enter position to delete::");
	scanf("%d",&p);
	for(i=p;s1[i]!='\0';i++)
	{
		s1[i]=s1[i+1];
	}
	
	printf("\nnew string=%s::",s1);
}