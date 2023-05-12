//. Write a C program to find greater number
//MACRO.
#include<stdio.h>
#define greater(a,b) a>b?a:b
int main()
{
	int a,b;
	printf("\nenter two number:");
	scanf("%d%d",&a,&b);
	printf("greater  number=%d",greater(a,b));
}