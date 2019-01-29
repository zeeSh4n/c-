#include<stdio.h>

int checkPrime(int n)
{
	int i=2;
	do
	{
		if(n%i==0)
		return 1;
		i++;
	}while(i<n);
	return 0;
}
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
		k=checkPrime(i);
		if(k==0)
		{
			printf(" %d ",i);
		}
		k=0;
	}
	printf("\n");
}
