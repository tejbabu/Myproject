#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=0; i<5; i++)
	{
	scanf("%d",&a[i]);
	}
 printf("the negative values are\n");

        for(i=0; i<5; i++)
	{
	if(a[i]<0)

	printf("%d\n",a[i]);
}
}
