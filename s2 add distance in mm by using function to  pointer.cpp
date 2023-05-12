#include<stdio.h>
int main()
{
	int km,mm,cm,d;
	void distance(int *mm,int d);
	printf("enter distance in km ,mm,cm,and distance to add");
	scanf("%d%d%d%d",&km,&mm,&cm,&d);
	distance(&mm,d);
		printf("\nenter distance in km=%d ,\nmm=%d,\ncm=%d",km,mm,cm);
}
void distance(int *mm,int d)
{
		*mm=*mm+d;
}
 

 