#include<stdio.h>
void main()
{
        int fib1=0,fib2=1,fib3=0,i,terms;
        printf("enter the terms\n");
        scanf("%d",&terms);
        for(i=1; i<=terms; i++)
        {
                printf("%d\n",fib3);
                fib1=fib2;
                fib2=fib3;
                fib3=fib1+fib2;

        }
}

