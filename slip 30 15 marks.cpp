//A Create a structure employee (id, name, salary). Accept details of n 
//employees and find the details of employee having maximum salary. 
//Write separate function. 
#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float sal;
}e1[20];
void disp(struct employee e1[],int n)
{
	int i;
	float max;
	max=e1[0].sal;
	for(i=0;i<n;i++)
	{
		if(e1[i].sal>max)
		{
			max=e1[i].sal;
		}
	}
	printf("\n this employee having gretest salary:");
	for(i=0;i<n;i++)
	{
		if(e1[i].sal==max)
		{
			printf("\n%d\t%s\t%f",e1[i].id,e1[i].name,e1[i].sal);
		}
	}
	
	
}
int main()
{
	int i,n;
	printf("\nenter limit:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nenter id name sal::");
		scanf("%d%s%f",&e1[i].id,&e1[i].name,&e1[i].sal);
	}
	disp(e1,n);
	
}