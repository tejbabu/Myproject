#include<stdio.h>
void main()
{
	int a[5]={23,3,56,367,4};
	int i,j,temp;
	for(i=0, j=4; i<j; i++, j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	for(i=0;i<5;i++)
	printf("%d\t",a[i]);
	
}
