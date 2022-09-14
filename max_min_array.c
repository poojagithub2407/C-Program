#include<stdio.h>

void main()
{
	int arr[20];
	int i,max,min; 
	printf("enter the element into array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<5;i++)
	{
		max=arr[0];
		if(arr[i]>max)
		{
			max=arr[i];
		}
	}
	
	for(i=0;i<5;i++)
{
	min=arr[0];
	if(arr[i]<min)
	{
		min=arr[i];
	}
}
printf("\nmaximum element in array is:%d",max);
printf("\nminimum element in array is:%d",min);
}
