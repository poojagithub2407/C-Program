#include<stdio.h>
int main()
{
	int arr[5];
	int i;
	printf("\nEnter element of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nElement in reverse order:");
	for(i=4;i>=0;i--)
	{
	    printf("\t%d",arr[i]);	
	}
}
