#include<stdio.h>
#include<stdlib.h>


void swap(int *arr,int i,int j)
{
	int temp = *(arr+i);
	*(arr+i) = *(arr+j);
	*(arr+j) = temp;
}

int partition(int *arr,int low,int high)
{
	int pivot,i,j;
	pivot = arr[high];
	i = low-1;
	
	for(j=low;j<=high-1;j++)
	{
		if(*(arr+j)<=pivot)
		{
			i++;
			swap(arr,i,j);
		}
	}
	swap(arr,i+1,high);
	return i+1;
}


void quickSort(int *arr,int low,int high)
{
	int pi;
	if(low<high)
	{
		pi = partition(arr,low,high);
		quickSort(arr,low,pi-1);
		quickSort(arr,pi+1,high);
	}
}

void main()
{
	int *arr,i,size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	arr= (int*)malloc(sizeof(int)*size);
	for(i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	quickSort(arr,0,size-1);
	
	printf("sorted array: ");
	for(i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
}











