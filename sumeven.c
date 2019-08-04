#include<stdio.h>
void main()
{
	int i,n,sum=0;
	printf("enter nth element");
	scanf("%d",&n);
	for(i=1; i<=n; i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
		}
	}
	printf("the sum of even numbers upto n=%d",sum);
	
}
