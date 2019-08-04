#include<stdio.h>
void swap(int*, int*);
void main()
{
	int a=10,b=20;
	swap(&a,&b);
	printf("swap of two numbers %d,%d",a,b);	
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
