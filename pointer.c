#include<stdio.h>
void main()
{
	int a=15,b=20;
	float c=12.4;
	double d=12.45;
	int *Pi=&a,*pi2=&b;
	float *pf=&c;
	double *pd=&d;
	printf("%p",pi2);
	printf("%f,%f, %p,%p, %d",*pd,*pf,pf,pi2,b);
}
