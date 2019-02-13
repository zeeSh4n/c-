#include <stdio.h>
#include <stdlib.h>
void selectionSort(int*,int);
int findMin(int* , int);

void main()
{
	int *arr,size;
	system("clear");
	
	printf("Enter the size of array:");
	scanf("%d",&size);
	arr = (int*)malloc(sizeof(int)*size);
	printf("Enter elements:\n");
	for(int i=0;i<size;i++)
	scanf("%d",&arr[i]);
	
	system("clear");
	
	printf("Given array: ");
	for(int i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n\n");
	
	selectionSort(&arr[0],size);
	
	printf("\nsorted array: ");
	for(int i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n\n");
	
}

void selectionSort(int *arr,int size)
{
	int min,i,temp;
	int x;
	for(i=0;i<size;i++)
	{
		
		min=findMin((arr+i),(size-i));
		
		printf("pass%d=> ",i);
		for(x=0;x<size;x++)
		{
			printf("%d ",*(arr+x));
		}
		printf("\n");
		
		temp= *(arr+i);
		*(arr+i) = *(arr+min+i);
		*(arr+min+i) =temp;
	}
}

int findMin(int *arr, int size)
{
	int t,min,i=0,flag=0;
	
	min= *(arr+0);
	for(i=0;i<size;i++)
	{
		
		if(*(arr+i)<min)
		{
			min=*(arr+i);
			t = i;
			flag=1;
		}
		if(flag==0)
		t=0;
	}
	return t;
}

