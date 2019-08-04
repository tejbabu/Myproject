#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three number:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf("%d is biggest ",a);
		}	
		else
		{
			printf("%d is biggest ",c);
		}	
	}	
	else if(b>c)
	{
		printf("%d is biggest",b);
	}	
	else
	{
		printf("%d is biggest",c);
	}
}
