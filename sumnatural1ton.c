#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter nth element");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		sum=sum+i;
	}	
	printf("the sum of n numbers%d",sum);
}
