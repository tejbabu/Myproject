#include<stdio.h>
void main()
{
	int a[6]={2,45,6,78,0,0};
	int even=0,odd=0,i;
	for(i=0; i<6; i++)
	{
		if(a[i]%2==0)
		even++;
		else
		odd++;
	}
	printf("the even%d and odd number%d is",even,odd);
}
