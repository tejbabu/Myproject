#include<stdio.h>
void main()
{
	int a[5]={23,6,45,34,25};
	int element,loc,i;
	printf("enter element of an arrray is\n ");
	scanf("%d",&element);
	printf("enter location of an array is \n");
	scanf("%d",&loc);
	printf("the array of elements are");
	for(i=0; i<5; i++)
	{
		printf("%d\n",a[i]);
	}
	for(i=5-1; i>=loc; i--)
	{
		a[i+1]=a[i];
	}
	a[loc]=element;
	printf("the array with inserted element :\n");
	for(i=0; i<6; i++)
	{
		printf("%d\n",a[i]);
	}
}
