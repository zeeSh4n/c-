
/*OUTPUT


Enter the height : 7
-------*
------***
-----*****
----*******
---*********
--***********
-*************
--***********
---*********
----*******
-----*****
------***
-------*

*/







#include<stdio.h>
int main()
{
	int h;
	printf("\nEnter the height : ");
	scanf("%d",&h);
	//mirrorTriangle
	for(int i=h ; i>=1 ; i--)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("-");
		}
		for(int k=1 ; k<=h-i+1 ; k++)
		{
			printf("*");
		}
		
	//triangle			
		for(int l=1 ; l<=h-i ; l++)
		{
			printf("*");
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
			printf("*");
		}
		
		//reverseTriangle
		for(int j=1 ; j<=h-i ; j++)
		{
			printf("*");
		}
		
		
		printf("\n");
		
	}
	return 0 ;
}
