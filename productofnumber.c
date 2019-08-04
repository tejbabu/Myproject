#include<stdio.h>
void main()
{
	int n,p=1,q;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		q=n%10;
		p=p*q;
		n=n/10;
	}
	printf("the product of the number%d",p);
}
