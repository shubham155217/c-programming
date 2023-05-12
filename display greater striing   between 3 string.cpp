#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20],s3[20];
	int count1=0,count2=0,count3=0,i;
	printf("enter string1::");
	gets(s1);
	printf("enter string2::");
	gets(s2);
		printf("enter string3::");
	gets(s3);
	
	for(i=0;s1[i]!='\0';i++)
	{
		count1++;
	}
		for(i=0;s2[i]!='\0';i++)
	{
		count2++;
	}
		for(i=0;s3[i]!='\0';i++)
	{
		count3++;
	}
	
	if(count1>count2 && count1>count3)
	printf("string 1 is greater ");
	else if (count2>count1 && count2>count3)
	printf("string 2 is greater ");
    else 
    printf("string3 is greater");
	
}