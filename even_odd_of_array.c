void main()
{
	int arr[20],n,i;
	printf("\nenter the size of array :");
	scanf("%d",&n);
	printf("Enter the element of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
    for(i=0;i<n;i++)
    {
    	if(arr[i]%2==0)
    	{
    		printf("\nEven number %d",arr[i]);
		}
		else
		{
			printf("\nodd number %d",arr[i]);
		}
	}
    /*for (i=0;i<n;i++)
	{
	
		{ 
		if(arr[i]%2!=0)
			printf("\nodd number %d",arr[i]);
		}
	}*/
}
