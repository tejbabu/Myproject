#include<stdio.h>
void check(int num);
void main()
{
	int a[5],i;
	for(i=0;i<5;i++ )
	{
	printf("the array of elements");
	scanf("%d",&a[i]);
	check(a[i]);
	}
}

	
void check(int num)	
{
	if(num%2==0)
	printf("the %d  is even",num);
	else
	printf("the %d is odd ",num);
}
