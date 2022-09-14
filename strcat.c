#include<stdio.h>
void strcat(char*,char*);
void main()
{
	char str1[20],str2[30];
	printf("\nEnter 1st string :");
	scanf("%s",&str1);
	printf("\nEnter 2nd string :");
	scanf("%s",&str2);
	strcat(str1,str2);

	
	
}
 void strcat(char*str1,char*str2)
{
	int i=0,j=0;
	while(str1[i]!='\0')
	{
		i++;
	}
	while(str2[j]!='\0')
	{
		str1[i]=str2[j];
		j++;
		i++;
	}
	str1[i]='\0';
	printf("string  after cantenation : %s",str1);
	}
