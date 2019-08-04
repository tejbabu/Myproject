#include<stdio.h>
void main ()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if(c>='a' && c<='z' || c>='A' && c<='Z')
	{
		printf("the entered number is a character");

	}
	else 
		printf("the entered number is not a characgter");

}
