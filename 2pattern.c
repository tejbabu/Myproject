#include<stdio.h>
void main()
{
	int i,j,n=1,m=0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i%2==0)
			{	
			printf("%d",n);
			}
			else
			printf("%d",m);

		}
		printf("\n");
		
        }
}
