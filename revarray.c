#include<stdio.h>
void main()
{
	int i,j,temp,a[]={1,5,6,7,8,9,3,12,3};
	for(i=0, j=8; i<j; i++, j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<9;i++)
	printf("%d ",a[i]);
}
