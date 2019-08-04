#include<stdio.h>
void main()
{
	int i,j,k=1;
	for(i=1; i<6; i++)
	{
		for(j=1; j<6; j++,k++)
		{
			printf("%3d",k);
		}
		printf("\n");
	}
}
