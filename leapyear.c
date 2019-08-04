#include<stdio.h>
void main()
{	
	int n;
	printf("enter a number");
	scanf("%d",&n);
	if(n%400==0 ||    (n%4==0 && n%100!=0 ))
	printf("n is leap year");
       
		printf("n is not leap year");	

}
