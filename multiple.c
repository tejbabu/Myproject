#include<stdio.h>
void main()
{
	int i,n;
	printf("enter the multiplication table of");
	scanf("%d",&n);
	for(i=1; i<=10; i++)
	{
		printf("%d*%d=%d",n,i,n*i);
		printf("\n");
	}
}
