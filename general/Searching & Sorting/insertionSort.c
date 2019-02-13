#include<stdio.h>
#include<stdlib.h>
void sortIt(int*,int);
void main()
{
	int *arr,size;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	arr=(int*)malloc(sizeof(int)*size);
	for(int i=0;i<size;i++)
	{
		printf("arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	
	sortIt(&arr[0],size);
	
	printf("\nSorted array: ");
	for(int i=0;i<size;i++)
	printf("%d ",arr[i]);
	printf("\n");
}

void sortIt(int *arr,int size)
{
	int x,temp;
	printf("\nsorting...\n");
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<i;j++)
		{
			if(*(arr+i)>=*(arr+j) && *(arr+i)<=*(arr+j+1))
			{
				x=i;
				temp=*(arr+x);
				while((x-1)!=j)
				{
					*(arr+x) = *(arr+x-1);
					x--;
				}
				arr[j+1] = temp;
			}
			else if(*(arr+i)<=*(arr+0))
			{
				x=i;
				temp=*(arr+x);
				while((x-1)!=-1)
				{
					*(arr+x) = *(arr+x-1);
					x--;
				}
				*(arr+0) = temp;
			}
		}
		printf("pass%d =>",i);
		for(int k=0;k<size;k++)
		printf(" %d",*(arr+k));
		printf("\n");
	}
}
