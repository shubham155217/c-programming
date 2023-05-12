#include<stdio.h>
#include<string.h>
struct
{
	int eno,sal;
	char name[20];
	
}e1[20];

int main()
{
	int i,n,flag=0;
	char ename[20];
	printf("enter limit: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter eno  name  sal::");
		scanf("%d%s%d",&e1[i].eno,&e1[i].name,e1[i].sal);
	}
	printf("enter name to search::");
	scanf("%s",&ename);
	for(i=0;i<n;i++)
	{
		if(strcmp(e1[i].name,ename)==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{ 
	    printf("record found:");
		printf("\neno=%d",e1[i].eno);
	    printf("\nname=%s",e1[i].name);
		printf("\salary=%d",e1[i].sal);
		
	}
	else
	printf("record not found");
}