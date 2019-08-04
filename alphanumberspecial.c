#include<stdio.h>
void main()
{
	int c;
	printf("enter a key");
	scanf("%d",&c);
	if(c>='a'&&c<='z'||c>='A'&&c<='Z')
	{
		printf("the number is character");
	}	
	else if(c>=0&&c<=9)
	{
		printf("the number is digit");

	}
	else 
		printf("the enter key is special character");

}
