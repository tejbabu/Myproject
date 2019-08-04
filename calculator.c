#include<stdio.h>
void main()
{
	char operator;
	int a,b;
	printf("choose operators\n");
	scanf("%c",&operator);
	printf("enter two number");
	scanf("%d %d",&a,&b);
	switch (operator)
	{	
		case '+':
			printf("%d+%d=%d",a,b,a+b);
			break;
		case '-':
			printf("%d-%d=%d",a,b,a-b);
			break;
		case '*':
			printf("%d*%d=%d",a,b,a*b);
			break;
		case '/':
			printf("%d/%d=%d",a,b,a/b);
			break;
		default :
			printf("operator is not correct");
	}	
}	
