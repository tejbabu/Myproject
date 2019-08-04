#include<stdio.h>
void main()
{
	int a[10]={10,5,8,23,53,3,6,3,9,3};
	int large,small,i;
	large=small=a[0];
	for(i=1;i<10; i++)
	{
		if(a[i]<a[0])
		{
			small=a[i];
		}
		if(a[i]>a[0])
		{
			large=a[i];
		}
	}
		printf("the smallest number is %d:,the largest  number is %d:",small,large);
}
