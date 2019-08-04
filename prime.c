#include<stdio.h>
void main()
{
	int n,i,count=0;
	printf("enter a number\n");
	scanf("%d",&n);
	for(i=1; i<=n; i++ )
	{
		if(n%i==0)
		{
			count++;
		}

	}	
	
	if(count==2)
	{
		printf("the given number is prime number\n");
	}
	else
	{
		printf("the given number is not a prime number\n");
	}
}
