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
	
	for(int i=h ; i>=1 ; i--)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	return 0 ;
}
