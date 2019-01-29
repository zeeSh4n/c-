#include<stdio.h>

void main()
{
	int i,j,len=0;
	char str[30];
	printf("\nEnter a string : ");
	scanf("%s",&str);
	
	while(str[len]!='\0')
	len++;
	
	int flag=0;
	for(i=0,j=len-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("\n%s is palindrome.\n\n",str);
	else
	printf("\n%s is not palindrome.\n\n",str);
	
}
