#include<stdio.h>
void main()
{
	int i,j;
	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			if(i==3&&j==3)
			{
				printf("0");
			}
			else
				printf("1");
		}
		printf("\n");
	}
}
