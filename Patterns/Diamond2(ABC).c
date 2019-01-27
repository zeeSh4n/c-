/*
OUTPUT

Enter the height : 7
-------A
------ABA
-----ABCAB
----ABCDABC
---ABCDEABCD
--ABCDEFABCDE
-ABCDEFGABCDEF
--ABCDEFABCDE
---ABCDEABCD
----ABCDABC
-----ABCAB
------ABA
-------A


*/




#include<stdio.h>
int main()
{
	int h,a;
	a = 64 ;
	printf("\nEnter the height : ");
	scanf("%d",&h);

	for(int i=h ; i>=1 ; i--)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("-");
		}
		for(int k=1 ; k<=h-i+1 ; k++)
		{
			printf("%c",a+k);
		}
					
		for(int l=1 ; l<=h-i ; l++)
		{
			printf("%c",a+l);
		}
		printf("\n");	
	}
	
	for(int i=2 ; i<=h ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("-");
		}
		
		for(int k=1 ; k<=h-i+1 ; k++)
		{
			printf("%c",a+k);
		}
		
		for(int j=1 ; j<=h-i ; j++)
		{
			printf("%c",a+j);
		}
		
		printf("\n");
		
	}
	return 0 ;
}
