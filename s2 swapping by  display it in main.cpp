#include<stdio.h>
int main()
{ 
   int swap(int *a,int *b);
  int a,b,t;
	printf("enter values of two numbers");
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d\nb=%d",a,b);
	swap(&a,&b);
	printf("\nafter swapping a=%d\nb=%d",a,b);
}
void swap(int *a,int *b)
{   int t;
    t=*a;
    *a=*b;
    *b=t;

	
}