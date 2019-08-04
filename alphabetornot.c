#include<stdio.h>
void main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if((c>='a'&& c<='z')||(c>='A' && c<='Z') )
	{
		printf("the entered character is alphabet");
	}
	else
		printf("the entered character is not a alphabet");
}
