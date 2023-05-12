#include<stdio.h>
struct emp
{
	int eno;
	char ename[20];
	float sal;
}e1[20];
int main()
{  
   int n,i,num;
	printf("enter limit::");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("enter eno ename salary::");
		scanf("%d%s%f",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}

	printf(" enter eno to search::");
	scanf("%d",&num);
	printf("eno   ename    salary::\n");
	for(i=0;i<n;i++)
	{ 
	  if(e1[i].eno==num)
		{
		printf("%d\t",e1[i].eno);
		printf("%s\t",e1[i].ename);
      	printf("%f\t",e1[i].sal);
      	printf("\n");
      	break;
		}
	}
	if(i==n)
	printf("record not found...");
}