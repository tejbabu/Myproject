#include<stdio.h>
void main()
{
	int n,i,a=0,b=1,c;
	printf("enter nth term of a series\n");
	scanf("%d",&n);
	printf("%d %d",a,b);
        c=a+b;
	for(c=1; c<=n; i++)
	{       
      		printf("%d\n",c);

		a=b;
		b=c;
		c=a+b;

	}
}
