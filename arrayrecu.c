#include<stdio.h>
#define SIZE 100
void printarray(int a[], int start,int len);

void main()
{
	int a[SIZE],n,i;
	printf("enter size of a array\n");
	scanf("%d",&n);
	printf("the array of elements\n");
	for(i=0; i<n; i++)
	{
	
		scanf("%d",&a[i]);
	}
	printf("the array of elements :);
	printarray(a,0,n);
}
void printarray(int arr[], int start,int len)
{
	if(start>=len)
	return;
	printf("%d",arr[start]);
	printarray(arr,start+1,len);

}

