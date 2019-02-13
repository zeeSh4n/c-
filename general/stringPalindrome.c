#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	char str[10], *strev;
	int comp;
	strev = (char*)malloc(sizeof(char)*10);
	int i,j;
	char temp;
	printf("\nEnter a string: ");
	scanf("%s",str);
	strcpy(strev,str);
	for(i=0,j=strlen(strev)-1;i<j;i++,j--)
	{
		temp = *(strev+i);
		*(strev+i) = *(strev+j);
		*(strev+j) = temp;
	}
	printf("\nreversed: %s",strev);
	if(strcmp(str,strev) == 0)
	printf("\nString is Palindrome.\n");
	else
	printf("\nString is not Palindrome.\n");
	
}
