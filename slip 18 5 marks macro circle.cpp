#include<stdio.h>
#define PI 3.14
int main()
{
	float n, r,area;
	printf("\nenter radius::");
	scanf("%f",&r);
	area=PI*r*r;
	printf("\n area of circle=%f",area);
}