#include<stdio.h>
void main()
{
	int i,n,count=0;
	printf("enter a number");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		n=n/10;
	}
	printf("the number of digits in a number is %d",count);
	

}
