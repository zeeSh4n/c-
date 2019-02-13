#include<stdio.h>
void keySearch(int*,int);
void main()
{
	int arr[20],size;
	printf("Enter the size(<20) of array:");
	scanf("%d",&size);
	printf("\nEnter elements:\n");
	for(int i=0;i<=size-1;i++)
	{
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	keySearch(arr,size);
}

void keySearch(int *arr,int size)
{
	int key;
	printf("Enter an element to search: ");
	scanf("%d",&key);
	int flag=0;
	for(int i=0;i<=size-1;i++)
	{
		if(*(arr+i)==key)
		{
			printf("\n%d is found at location: %d\n",key,i);
			flag=1;
		}
	}
	if(flag==0)
	printf("%d is not found in array!\n",key);
}
