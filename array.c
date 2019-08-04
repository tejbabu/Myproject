#include <stdio.h>
void main()
{
	int a[5],i;
	for(i=0; i<=4; i++)
	{
		printf("enter the value for a[%d]",i );
		scanf("%d",&a[i]);
	}	
        for(i=0; i<=4; i++)
		printf(" %d",a[i]); 
}
