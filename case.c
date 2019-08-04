#include<stdio.h>
void main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if(c>='a'&&c<='z')
	{
		printf ("the character is lower case");
	}
//	else if (c>='A'&&c<='Z')
	else
	{
		printf("the character is upper case");
	}
}
