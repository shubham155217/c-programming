#include<stdio.h>
int main()
{
	
	int a[20],i,j,n,t;
	printf("enter limit::");
	scanf("%d",&n);
	printf("enter array elements::");
	for(i=0;i<n;i++)
	{
	   scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("\n  sorted array::");
	for(i=0;i<n;i++) 
	{
		printf("%d \t",a[i]);
	}
	
}