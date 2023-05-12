#include<stdio.h>
int main()
{
	int i,n,a[20],p;
	printf("enter limit::");
	scanf("%d",&n);
	printf("\nenter array element..:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nenter position..:");
	scanf("%d",&p);
    
    for(i=n;i>=p;i--)
    {
    	a[i]=a[i+1];
	}
	printf("\n new array=");
	for(i=0;i<n;i++)
	{
		printf("\t%d\t",a[i]);
	}
	
}