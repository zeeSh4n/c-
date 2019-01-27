
/*
OUTPUT
Enter the height : 7
 1234567123456
  12345612345
   123451234
    1234123
     12312
      121
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
		
		
		for(int j=1 ; j<=h-i ; j++)
		{
			printf("%d",j);
		}
		
		
		printf("\n");
		
	}
	return 0 ;
}
