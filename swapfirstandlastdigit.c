#include<stdio.h>
void main()
{
	int n,sum=0;
	printf("enter a number" );
	scanf("%d",&n);
	while(n!=0)
	{
		sum=sum+n%10;
		n=n/10;
	}
	printf("the sum of a number is %d",sum);


}
