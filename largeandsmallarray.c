#include<stdio.h>
void main()
{
	int i,a[5]={34,5,4,7,3};
	int large,small;
	large=small=a[0];
	for(i=1; i<5; i++)
	{
		if(a[i]<small)
		small=a[i];
		if(a[i]>large)
		large=a[i];
	}
	printf("the smallest=%d\n  largest is= %d",small,large);

}

	
