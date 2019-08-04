#include<stdio.h>
void main()
{
	int a[5]={10,30,30,3,4};
	int i,sum=0;
	for(i=0; i<5; i++)
{
	sum=sum+a[i];
}
printf("the sum of the array is %d",sum);
}
