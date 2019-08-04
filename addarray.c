#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	for(i=0; i<=4; i++)
	{
		printf("enter the values of a array a[%d]",i);
		scanf("%d",&a[i]);
		sum=sum+a[i];

	}
	        printf("%d",sum);
}
