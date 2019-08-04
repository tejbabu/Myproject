#include<stdio.h>
void main()
{
	int a=10;
	int *p=&a;
	float b=20;
	float *q=&b;
	void *ptr;
	ptr=&a;
//	ptr=&b;
	printf("%p %p %p\n",p,q,ptr);
	printf("%d %d\n",*p,*(int *)ptr);
	printf("%f %f\n",*q,*(float *)ptr);
}
