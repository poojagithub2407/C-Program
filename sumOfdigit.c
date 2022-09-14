#include<stdio.h>

int sumofdigit(int*);
void main()
{
	
	int num;
	printf("\nEnter 3 digit number :");
	scanf("%d",&num);
	int ans=sumofdigit(&num);
	printf("\nSum of 3 digit number : %d",ans);
	
}

int sumofdigit(int*num)
{
	int r,q,sum=0,i;
    while(*num>0)
    {
    	r=*num%10;
    	sum=sum+r;
    	*num=*num/10;
	}
	return sum;
}
