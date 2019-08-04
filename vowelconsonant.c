#include<stdio.h>
void main()
{
	char c;
	printf("enter a character");
	scanf("%c",&c);
	if((c=='a')||(c=='e')||(c=='i')||(c=='o')||(c=='o'))
	{
		printf("the input character is vowel");
	}
	else
		printf("the input character is consonant");
}
