#include<stdio.h>
void main()
{
	int a[5]={10,5,30,50,3};
	int i,j,temp;
	for(i=0; i<5-1; i++)
	{
		for(j=0; j<5-1-i; j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("the sorted array elements are\n");
	
		for(j=0; j<5; j++)
		{
			printf("%d\n",a[j]);
		}
	
}	
