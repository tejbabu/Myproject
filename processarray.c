#include<stdio.h>
void main()
{
	int a[5],i;
	for(i=0; i<5; i++)
	{
		printf("enter element of a array a[%d]\n ",i);
		scanf("%d",&a[i]);

	}	
	printf("the elements of a array\n");
	for(i=0; i<5; i++)
	printf("%d\t",a[i]);
}
