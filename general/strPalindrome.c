#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void check(char *str,int len)
{
	int i,j;
	for(i=0,j=len-1;i<=len/2;i++,j--)
	{
		if(toupper(*(str+i))!=toupper(*(str+j)))
		{
			printf("\nString is not Palindrome\n");
			exit(0);
		}
	}
	printf("\nString is Palindrome\n");
}

void main()
{
	char str[10];
	printf("\nEnter a string: ");
	scanf("%s",str);
	int len = strlen(str);
	check(str,len);
}
