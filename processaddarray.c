#include<stdio.h>
void main()
{
	int a[5],i,sum=0;
	for(i=0; i<5; i++)
	{
		printf("the elements of array");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("the sum of array of elements %d",sum);
}
