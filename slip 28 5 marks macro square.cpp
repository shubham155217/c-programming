//. Write a C program to calculate SQUARE of given number using 
//MACRO.
#include<stdio.h>
#define square(n) n*n
int main()
{
	int n;
	printf("\nenter number:");
	scanf("%d",&n);
	printf("square of number=%d",square(n));
}