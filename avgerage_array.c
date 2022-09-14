#include<stdio.h>
void main()
{
	int arr[5];
	int i,sum;
	float avg;
	printf("\nEnter element of array :");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<5;i++)
	{
	     sum=sum+arr[i];
	}
	printf("\nSum of element of array : %d",sum);
	for(i=0;i<5;i++)
	{
		avg=sum/arr[i];
	}
	printf("\navgerage of element in array : %f",avg);
}
