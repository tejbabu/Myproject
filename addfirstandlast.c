#include<stdio.h>
void main()
{
	int n,f,l,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	f=n;
        l=n;
	l=n%10;
	while(f>=10)
	{
		f=f/10;
	}
	sum=l+f;
	printf("the sum of first and last is %d",sum);

}
