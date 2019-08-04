#include<stdio.h>
int fun(int num);
void main()
{
	int num,k;
	printf("enter a number\n");
	scanf("%d",&num);
	k=fun(num);
	printf("factorial=%d\n",k);
}
int fun(int num)
{
	int fact=1;
	while(num!=0)
	{
		fact=fact*num;
		num--;
	}

	return fact;
}

