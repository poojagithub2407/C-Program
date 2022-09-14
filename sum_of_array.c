void main()
{
	int arr[20],n,i,sum=0;
	printf("enter the size of array:");
	scanf("%d",&n);
	printf("\nenter element of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=arr[i]+sum;
	}
		printf("sum of element in aarray is:%d",sum);
		
	
}
