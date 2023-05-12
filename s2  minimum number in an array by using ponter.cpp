#include<stdio.h>
int main()
{
	int *a[10],i,n,min;
	printf("enter limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",a+i);
		
	}
	min=*(a+0);
	for(i=1;i<n;i++)
	{
		if(*(a+i)<min)
		min=*(a+i);
		
	}
	printf("minimum number is %d",min);
}