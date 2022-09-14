#include<stdio.h>
void revstr(char*);
void main()
{
	char str[50];
	printf("\nEnter a string :");
	scanf("%s",str);
	revstr(str);
	printf("\nThe Reverse String :%s",str);
	
}

void revstr(char*str)
{
	int len,i,temp;
	len=strlen(str);
	for(i=0;i<len/2;i++)
	{
		temp=str[i];
		str[i]=str[len-i-1];
		str[len-i-1]=temp;
	}
}
