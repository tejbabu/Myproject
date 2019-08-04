#include<stdio.h>
void main()
{
	int arr[]={10,34,65,3,4,6};
	int large=arr[0],i;
	for(i=1; i<6; i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	 printf("the largest number%d:",large);

	
}
