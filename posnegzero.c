#include<stdio.h>
void main()
{
	int num;
	printf("enter a number:");
	scanf("%d",&num);
	if(num>0)
	{
		printf("num is positive");
	}
        if(num<0)
	{
		printf("num is negative");
	}	
	if(num==0)
	{
		printf("num is zero" );
	}	
	
}	
