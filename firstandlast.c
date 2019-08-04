#include<stdio.h>
void main()
{
	int n,f,l;
	printf("enter a number");
	scanf("%d",&n);
	f=n;
	l=n;
	l=n%10;
	while(f>=10)
	{
		f=f/10;


	}
	printf("%d %d",f,l);

}
