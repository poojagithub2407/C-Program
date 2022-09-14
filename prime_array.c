#include<stdio.h>
void main()
{
	int arr[5],i,j,counter;
	printf("\nEnter element of  array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\nprime element array :");
	for(i=0;i<5;i++)
	{
		counter=0;
		for(j=2;j<arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				counter=1;
				break;
			}
		}
		if(counter==0)
		{
			printf("\t%d",arr[i]);
		}
	}
}
