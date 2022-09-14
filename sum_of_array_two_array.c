void main()
{
	int a[10],b[10],c[30],i,n;
	printf("\nenter the size of array :");
	scanf("%d",&n);
	printf("\nEnter element of 1st array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter element of 2nd array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++)
	{
	    c[i]=a[i]+b[i];
	}
	printf("sum of two array element");
	 for(i=0;i<n;i++)
	{
	printf("\n%d",c[i]);
	}
}
