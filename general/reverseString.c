#include<stdio.h>

void main()
{
	int i,j,len=0;
	char str[30];
	printf("\nEnter a string : ");
	scanf("%s",&str);
	
	while(str[len]!='\0')
	len++;
	
	char temp;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	str[++len]='\0';
	printf("\nreversed string:%s\n\n",str);
	
}
