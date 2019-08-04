#include<stdio.h>
void main()
{
	int a[10],num,i,j;
	printf("enter a number");
	scanf("%d",&num);
	for(i=0; num>0; i++)
	{
		a[i]=num%2;
		num=num/2;


	}
	for(j=i-1; j>=0; j--)
	{
		printf("%d",a[j]);

	}
	
}
