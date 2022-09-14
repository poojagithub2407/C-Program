#include<stdio.h>
int strleng(char*);
void main()
{
	char str[30];
	printf("\nEnter string :");
	scanf("%s",&str);
	int c=strleng(str);
	printf("\nLength of string is : %d",c);
}
int strleng(char*str)
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}
