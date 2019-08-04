#define ROW 4
#define COL 3
#include<stdio.h>
void main()
{
	int a[ROW][COL],i,j;
	printf("enter the elements of a matrix %d*%d",ROW,COL);
	for(i=0;i<ROW;i++)
	{
		for(j=0; j<COL; j++)
		scanf("%d",&a[i][j]);
	}
	printf("the matrix you have entered\n");
	for(i=0; i<ROW; i++)
	{
		for(j=0; j<COL; j++)
		{
		printf("%5d",a[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
