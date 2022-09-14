#include<stdio.h>
char*strcpy(char*,char*);
void main()
{
	char str[30],str1[30];
	printf("\nEnter string:");
	scanf("%s",&str);
	strcpy(str1,str);
	printf("\ncopy string :%s",(str1,str));
	
	}
	char*strcpy(char*str1,char*str)
	{
		int i=0;
		while(str[i]!='\0')
		{
			str1[i]=str[i];
			i++;
		
	}
	str1[i]='\0';
		return str1;
		}
