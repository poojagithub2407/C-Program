void main()
{
	int a[20],i,n,sum=0,avg,max,min;
	printf("enter the size of array :");
	scanf("%d",&n);
	printf("enter the element of array :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("\n\tsum of array element :%d",sum);
	for(i=0;i<n;i++)
	{
	   sum=sum+a[i];
	  avg=sum/a[i];
	  }
	 printf("\taverage of array element:%d",avg);
     for(i=0;i<n;i++)
     {
     	max=a[0];
     	min=a[0];
     	if(a[i]>max){
     	   max=a[i];
		 }
	}
		 printf("\tmaximum number in array element  :%d",max);
		 
		 for(i=0;i<n;i++)
		 {
		 	if(a[i]<min)
		 	{
		 		min=a[i];
			 }
		}
			 printf("\tminimum number in array element: %d",min);
		 
}




