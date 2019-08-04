#include<stdio.h>
void main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
	{
		printf("num is divisble by 5&11");
	}
        else
		printf("num is not divisible by 5&11");	
}	
