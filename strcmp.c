#include<stdio.h>
int strcmp(char*,char*);
void main()
{
	char str1[20],str2[20];
	printf("\nEnter  1st string :");
	scanf("%s",&str1);
	printf("\nEnter 2nd string :");
	scanf("%s",&str2);
    int c=strcmp(str1,str2);
	if(c==0)
	{
		printf("string is same ");
	}
	else
	{
		printf("string is not same ");
	}
}
	
int strcmp(char*str1,char*str2)
	{
		int flag=0,i=0;
		while(str1[i]!='\0'&&str2[i]!='\0')
		{
			if(str1[i]!=str2[i])
			{
				flag=1;
				break;
			}
			i++;
		}
		if(flag==0)
		{
			return 0;
		}
		else
		{
			return 1;
		}
}
