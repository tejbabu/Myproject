#include<stdio.h>
void main()
{
	int num;
	printf("enter a number:\n");
	scanf("%d",&num);
	if((num%5==0)&&(num%11==0))
	{
		printf("number is divisble by 11\n");
	}
	else
	{
		printf("number is not divisble by 5 and 11\n");
	} 

}
