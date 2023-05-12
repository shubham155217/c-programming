#include<stdio.h>
int main()
{
	void date(int* dd,int *mm, int *yy,int days);
	int dd,mm,yy,days;
	printf("enter dd,mm,yy,days to add=");
	scanf("%d%d%d%d",&dd,&mm,&yy,&days);
	date(&dd,&mm,&yy,days);
	printf("new date=%d-%d-%d",dd,mm,yy);
	
}
void date(int *dd,int *mm, int *yy,int days)
{  *dd=*dd+days;
	if((*mm==1||*mm==3||*mm==5||*mm==7||*mm==8||*mm==10||*mm==12)&& *dd>=32)
	 {
	 	*mm=*mm+1;
	 	*dd=*dd-31;
	 	
	 }
	 	if((*mm==4||*mm==6||*mm==9||*mm==11)&& *dd>=31)
	 {
	 	*mm=*mm+1;
	 	*dd=*dd-30;
	 	
	 }
	 if((*mm==2)&& *dd>=30)
	 {
	 	*mm=*mm+1;
	 	*dd=*dd-29;
	 }
	 if(*mm>=13)
	 {
	 	*mm=*mm-12;
	 	*yy=*yy+1;
	 }
	 
}	