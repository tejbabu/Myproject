#include<stdio.h>
void main()
{
	int a[5]={10,30,40,50,60};
	int c[5],i;
	for(i=0; i<5; i++)
	{
		c[i]=a[i];
	}
	printf("the copied array of elements");
	for(i=0; i<5; i++)
	{
	printf("%d\n",c[i]);
	}
}
