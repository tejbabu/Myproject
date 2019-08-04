#include<stdio.h>
void main()
{
	int a[5]={12,34,45,67,56};
	int pos,i;
	printf("the position to be deleted\n");
	scanf("%d",&pos);
	for(i=pos; i<5; i++)
	{
		a[i]=a[i+1];
	}

	printf("the array of deletion of element\n");
	for(i=0; i<4; i++)
	{
		printf("%d\n",a[i]);
	}
}
