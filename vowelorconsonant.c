#include<stdio.h>
void main()
{
	char ch;
	printf("enter a character");
	scanf("%c",&ch);
	if(ch=='a' || ch=='e' || ch=='i' || ch=='0'|| ch=='u')
	{
		printf("the entered character is vowel");
	}
	else 
		printf("the entered character is consonant");

}
