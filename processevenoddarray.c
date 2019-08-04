#include<stdio.h>
#define EO 10
void main()
{
	int a[EO],i,even=0,odd=0;
	for(i=0; i<EO; i++)
	{
		printf("the array of elements");
		scanf("%d",&a[i]);
		if(a[i] % 2 == 0)
		{
			even++;
		}
		else
			odd++;
	}
	printf("the odd values in array are%d,the even values in array %d",odd,even); 

	
}
