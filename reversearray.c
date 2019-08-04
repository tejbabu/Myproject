#include<stdio.h>
void main()
{
	int i,j,temp,a[]={1,2,3,4,5,6,7,8,9};
	for(i=0, j=8; i<j; i++, j--)
	{
		temp=a[j];
		a[j]=a[i];
		a[i]=temp;
		
	}
	for(i=0;i<9;i++)
	{
	printf("%d ",a[i]);
	}
	printf("\n");
}
