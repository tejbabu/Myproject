#include<stdio.h>
void main()
{
	int i,j;
	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++)
		{
			if(i==1||j==1||j==5||i==5)
			{
				printf("1");
			}
			else
				printf("0");
		}
		printf("\n");
	}

}
