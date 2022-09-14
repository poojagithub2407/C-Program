#include<stdio.h>

int factorial(int*);
void main()
{
	
	int num;
	printf("\nEnter number :");
	scanf("%d",&num);
    int ans=factorial(&num);
    printf("\nFactorial of number : %d  ",ans);	
    
}

int factorial(int*ptr)
{
	
 	int i=1,fact=1;
 	while(i<=*ptr)
 	{
 		fact=fact*i;
 		i++;
    }
	 return fact;
	 
 }
