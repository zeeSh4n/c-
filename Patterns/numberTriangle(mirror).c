/* OUTPUT

Enter the height : 7
       1
      12
     123
    1234
   12345
  123456
 1234567


*/


#include<stdio.h>
int main()
{
	int h;
	printf("\nEnter the height : ");
	scanf("%d",&h);
	
	for(int i=h ; i>=1 ; i--)
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
