#include<stdio.h>
void main()
{
	int a=20;
	float b=2.5;
	int *i=&a;
        float *p=&b;
	printf("%d\n",a);
	printf("%p\n",&a);
	printf("%d\n",*i);
	printf("%p\n",i);	

}
