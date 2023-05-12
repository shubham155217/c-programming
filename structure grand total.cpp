#include<stdio.h>
struct item
{
	int ino,qty;
	char iname[20];
	float rate,total;
}i1[20];

int main()
{
	int n,i;
	float s=0;
	printf("enter limit::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter \tino\t iname\t rate\t qty\n");
		scanf("%d%s%f%d",&i1[i].ino,&i1[i].iname,i1[i].rate,i1[i].qty);
     	i1[i].total=i1[i].qty*i1[i].rate;
	}
	
	printf("enter ino\t iname\t rate\t qty\t total\n");
  	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%f\t%d\t%f",&i1[i].ino,&i1[i].iname,i1[i].rate,i1[i].qty,i1[i].total);
		s=s+i1[i].total;
	}
	printf("\ngrand total=%f",s);
	return 0;
	
}
