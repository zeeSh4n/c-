#include<stdio.h>
#include<stdlib.h>

void merge(int *l,int *r, int*arr,int len)
{
    int i=0,j=0,k=0,nl,nr;
    nl=len/2;
    nr=len-nl;
    while(i<nl&&j<nr)
    {
        if(*(l+i)<=*(r+j))
        {
            *(arr+k)=*(l+i);
            i++;
            k++;
        }
        else
        {
            *(arr+k)=*(r+j);
            j++;
            k++;
        }
    }
    while(i<nl)
    {
        *(arr+k)=*(l+i);
        k++;
        i++;
    }
    while(j<nr)
    {
        *(arr+k)=*(r+j);
        j++;
        k++;
    }
}

void sort(int *arr,int len)
{
    int l=0,*left,*right,mid;
    mid=len/2;
    if(len<2)
    return;
    left=(int*)malloc(sizeof(int)*mid);
    right=(int*)malloc(sizeof(int)*(len-mid));
    for(int i=l;i<mid;i++)
    left[i]=*(arr+i);
    for(int i=mid;i<len;i++)
    right[i-mid]=*(arr+i);
    
    sort(left,mid);
    sort(right,len-mid);
    merge(left,right,arr,len);
    
}



int main()
{
    int size, *arr;
    printf("enter the size: ");
    scanf("%d",&size);
    arr=(int*)malloc(sizeof(int)*size);
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    sort(arr,size);
    printf("sorted array: ");
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    return 0;
}