#include<stdio.h>
void main()
{
	int n,arr[100];
	printf("Enter the max limit: ");
	scanf("%d",&n);
	int i,j=2, flag=0,k=0;
	printf("\nTwin Prime Numbers are:\n");
	for(i=3;i<=n;i++)
	{
		j=2;
		while(j<i)
		{
			if(i%j==0)
			{
				flag=1;
				break;
			}
			j++;
		}
	
		if(flag==0)
		{
			arr[k]=i;
			k++;
		}
		flag=0;
	}
	for(int i=0;i<k-1;i++)
		{
			if(arr[i]==arr[i+1]-2)
			printf(" {%d,%d}",arr[i],arr[i+1]);
		}
	printf("\n");
}
