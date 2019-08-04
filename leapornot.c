#include<stdio.h>
void main()
{
	int n;
	printf("enter leap year");
	scanf("%d",&n);
	if((n%400==0)||(n%4==0)&&(n%100!=0))
	{
		printf("the entered year is leap year");
	}
	else
	{
		printf("the entered year is not leap year");
	}
}
