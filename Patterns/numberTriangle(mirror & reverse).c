/*
OUTPUT

Enter the height : 7
 1234567
  123456
   12345
    1234
     123
      12
       1


*/





#include<stdio.h>
int main()
{
	int h;
	printf("\nEnter the height : ");
	scanf("%d",&h);
	
	for(int i=1 ; i<=h ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf(" ");
		}
		
		for(int k=1 ; k<=h-i+1 ; k++)
		{
			printf("%d",k);
		}
		printf("\n");
		
	}
	return 0 ;
}
