#include<stdio.h>
#include<stdlib.h>
int size;

void swap(int *a,int x,int y)
{
    int temp;
    temp = *(a+x);
    *(a+x) = *(a+y);
    *(a+y) = temp;
    
}


void heapify(int *a,int i)
{
    int l,r,max;
    l=2*i;
    r=(2*i)+1;
    if(l<size && *(a+l)>*(a+i))
    {
        max=l;
    }
    else
    {
        max=i;
    }
    if(r<size && *(a+max)<*(a+r))
    {
        max=r;
    }
    if(max!=i)
    {
        swap(a,i,max);
        heapify(a,max);
    }
}



void buildHeap(int *a)
{
    int i;
    for(i=size/2;i>=0;i--)
    heapify(a,i);
}



int main()
{
    int *arr;
    printf("\n\t==============\n");
    printf("\t   Max-Heap");
    printf("\n\t==============\n");
    printf("Enter the size: ");
    scanf("%d",&size);
    arr=(int*)malloc(sizeof(int)*size);
    printf("enter the elements:\n");
    for(int i=0;i<size;i++)
    scanf("%d",&arr[i]);
    buildHeap(arr);
    
    printf("(max)Heap tree: ");
    for(int i=0;i<size;i++)
    printf("%d ",arr[i]);
}