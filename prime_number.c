#include<stdio.h>

int primenumber(int*);
void main()
{
	
	int num;
	printf("\nEnter number :");
	scanf("%d",&num);
	int ans=primenumber(&num);
	if(ans==1)
	{
		printf("\nNumber is not prime");
	}
	else
	{
		printf("\nNumber is prime ");
	}
	
}

int primenumber(int*num)
{
	int m,flag,i;
	m=*num/2;
	for(i=2;i<m;i++)
	{
		if(*num%i==0)
		{
		     flag=1;
		     break;
		}
	}
	if(flag==1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
