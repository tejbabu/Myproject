#include<stdio.h>
void main()
{
        int i,col,j,row;
        printf("enter row size and column");
        scanf("%d%d",&row,&col);
        for(i=1; i<=row; i++)
        {

                for(j=1; j<=col; j++)
                {
                if(j%2==0)
                {
                        printf("0");
                }
                else
                {
                        printf("1");
                }
                }
                printf("\n");
	}
}
