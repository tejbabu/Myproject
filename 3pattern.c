#include<stdio.h>
void main()
{
	int i,j,m=0,n=1;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
	        {
		if(j%2==0)
		{
			printf("%d",m);
		}
		else
			printf("%d",n);
		}
		printf("\n");
	}

}
