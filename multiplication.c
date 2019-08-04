#include<stdio.h>
void main()
{
	int i,j;
	printf("enter a number");
	scanf("%d",&i);
	for(j=1; j<=10; j++)
	{
		printf("%d * %d=%d\n",i,j,i*j );
	}	
}	
