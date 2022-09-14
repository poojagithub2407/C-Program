#include<stdio.h>
void main()
{
	int arr[5];
	int i,negative,positive;
	printf("\nEnter element of array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	negative=0;
	positive=0;
	for(i=0;i<5;i++)
	{
		if(arr[i]>0)
		{
			positive++;
		}
		else
		{
			negative++;
		}
	}
	printf("\nNumber of positive element present in array :%d",positive);
	printf("\nNumber of negative element present in array :%d",negative);
}
