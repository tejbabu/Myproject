#include<stdio.h>
void main()
{
int a[5]={10,5,6,20,4};
int max,min,i;
max=a[0];
min=a[0];
for(i=1; i<5; i++)
{
if( a[i]>max)
{
max=a[i];
}
else
{
min=a[i];
}
}
printf("the min num in the array is %d\n",min);
printf("the max num in the array is %d\n",max);

}
