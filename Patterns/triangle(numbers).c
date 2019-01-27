
/*

OUTPUT

Enter the height : 6
1
12
123
1234
12345
123456




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
			printf("%d",j);
		}
		printf("\n");
	}
	return 0 ;
}
