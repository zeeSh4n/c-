#include<stdio.h>
void main()
{
	int n,arr[50];
	printf("Enter the max limit: ");
	scanf("%d",&n);
	int i=1,j=0,temp,k=0;
	printf("\nPrime numbers in Fibonacci series upto %d :\n",n);
	while(i<=n)
	{
		temp=i;
		i=i+j;
		j=temp;
		printf(" %d ",i);
	}
	printf("\n");
}
