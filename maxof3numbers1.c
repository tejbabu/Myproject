#include<stdio.h>
void main()
{
	int a,b,c;
	printf("enter three numbers\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("%d is biggest",a);
		
	}
	else if(b>c)
	{
		printf("%d is biggest",b);
	}	
	else
		printf("%d is biggest",c);


}
