#include<stdio.h>
void main()
{
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n>0)
	{
		printf("the number is positive");
	}
	if(n<0)
	{
		printf("the number is negative");
	}
	if(n==0)
	{
		printf("the number is zero");
	}
}
