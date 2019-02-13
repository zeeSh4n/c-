#include<stdio.h>
#include<stdlib.h>

void main()
{
	int *a,*b,size;
	printf("Enter the size of array: "):
	scanf("%d",&size);
	a=(int*)malloc(sizeof(int)*size);
	b=(int*)malloc(sizeof(int)*size);
	
	printf("Enter the elements:n\");
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	
	int i,j=0,k,pos;
	b[0]=a[0];
	for(i=0;i<size;i++)
	{
		if(b[j]<=a[i])
		{
			b[++j]=a[i];
		}
		else
		{
			for(k=0;k<=j;k++)
			{
				if(a[i]<b[k])
				{
					pos=k;
					break;
				}
			}
			for(k=j;k<=pos;k--)
			{
				b[k+1]=b[k];
			}
			b[pos]=a[i];
			j++;
		}
	}
	
}
