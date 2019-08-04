#include<stdio.h>
void main()
{
	int i,j;
	int k=1;
	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			if(k==1)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
			k*=-1;
		}	
		printf("\n");


	}
}
