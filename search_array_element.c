void main()
{
	int a[10],n,i;
	int search,flag;
	printf("enter element in array :");
	scanf("%d",&n);
	printf("enter element of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",a[i]);
	}
	printf("enter element to search :");
	scanf("%d",&search);
	flag=0;
	for(i=0;i<a[i];i++)
	{
		if(a[i]==search)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("\nNumber is found %d",search);
	}
	else
	{
		printf("\nNumber is not found");b
	}
}
