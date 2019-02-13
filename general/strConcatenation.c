#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* concate(char*,char*,int,int);

void main()
{
	char str1[30],str2[30],*result;
	int i,j;
	printf("\nEnter 1st string: ");
	gets(str1);
	printf("Enter 2nd string: ");
	gets(str2);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	printf("%d %d",l1,l2);
	result = concate(str1,str2,l1,l2);
	printf("concated string: %s\n",result);
}

char* concate(char *str1,char *str2, int l1,int l2)
{
	int i,j;
	for(i=0,j=l1;i<=l2;i++,j++)
	{
		*(str1+j) = *(str2+i);
	}
	return str1;
}
