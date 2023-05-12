//Write a program to create a structure employee (id, name, salary). Accept 
//details of n employees and write a menu driven program to perform the 
//following operations. 
//i) Search by name 
//ii) Display all 
#include<stdio.h>
#include<string.h>
struct
{
 int eno,sal;
 char ename[20];
}
e1[20];

int main()
{  char name[20];
	int n,i,ch;
	printf("enter limit :");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter eno,ename,sal::");
		scanf("%d%s%d",&e1[i].eno,&e1[i].ename,&e1[i].sal);
	}
	printf("\n1:search by name\n2:display all");
do{

	printf("\n enter choice:");
	scanf("%d",&ch);
	switch(ch)
	{
	  case 1:
	         	printf("\n enter name to search::");
	           scanf("%s",name);
			   for(i=0;i<n;i++)
	         {
	  	         if (strcmp(e1[i].ename,name) == 0)
				   {
				   	printf("%d\t%s\t%d",e1[i].eno,e1[i].ename,e1[i].sal);
					} 
	          }
	          break;
	   case 2:   	for(i=0;i<n;i++)
                  	{
	                	
	                    	printf("\n%d\t%s\t%d",e1[i].eno,e1[i].ename,e1[i].sal);
                       	}
						   break;    
	}
 }while(ch<3);


}
