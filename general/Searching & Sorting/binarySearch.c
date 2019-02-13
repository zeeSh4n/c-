#include<stdio.h>
#include<stdlib.h>
void binarySearch(int*,int);
void bubbleSort(int*,int);
void main()
{
	int *arr;
	int size;
	printf("\nEnter the size of array: ");
	scanf("%d",&size);
	arr = (int*)malloc((sizeof(int))*(size));
	printf("Enter the elements:\n");
	int i;
	for(i=0;i<size;i++)
	{
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	bubbleSort(&arr[0],size);
	printf("\nSorted Array: ");
	
	for(int i=0;i<size;i++)
	printf("%d ",*(arr+i));
	
	binarySearch(&arr[0],size);
}
void bubbleSort(int *arr,int size)
{
	int i,j,temp;
	for(i=0;i<size-1;i++)
	{
		for(j=0;j<size-1;j++)
		{
			if(*(arr+j)>*(arr+j+1))
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}
void binarySearch(int *arr,int size)
{
	int key;
	printf("\nEnter the element to search: ");
	scanf("%d",&key);
	int l=0,r=size,mid=(l+r)/2;
	do
	{
		if(*(arr+mid)!=key)
		{
			if(key>*(arr+mid))
			l=mid+1;
			else
			r=mid-1;
		}
		else
		{
			printf("\n%d is found at location %d.\n",key,mid);
			return;
		}
		mid=(l+r)/2;
	}while(l<=r);
	printf("\n%d is not found in array\n",key);
}

