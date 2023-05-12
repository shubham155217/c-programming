#include<stdio.h>
#include<string.h>
struct student
{
  int rno;
  char name[20];
  float per;	
}s1[20];
int main()
{
	int i,j,n,t;
	printf("enter limit::");
	scanf("%d",&n);
   for(i=0;i<n;i++)
   {
   	  printf("enter rno name per::");
   	  scanf("%d%s%f",&s1[i].rno,&s1[i].name,&s1[i].per);
   }
   
   for(i=0;i<n;i++)
   {
   	for(j=0;j<n;j++)
   	{
   		if(s1[i].per<s1[j].per)
   		{
   			t=s1[i].per;
   			s1[i].per=s1[j].per;
   			s1[j].per=t;
		   }
   		
	   }
   }
   printf("\n ascending order of percentage");
   for(i=0;i<n;i++)
   {
      printf("\t%f",s1[i].per);
   }
}
