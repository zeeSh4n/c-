#include<stdio.h>
#include<stdlib.h>

void main()
{
	system("clear");
	int r1,r2,c1,c2;
	int a[10][10],b[10][10],sum[10][10];
	
	printf("Matrix A:\n");
	printf("Enter the number of rows: ");
	scanf("%d",&r1);
	printf("Enter the number of columns: ");
	scanf("%d",&c1);
	
	system("clear");
	
	printf("Matrix B:\n");
	printf("Enter the number of rows: ");
	scanf("%d",&r2);
	printf("Enter the number of columns: ");
	scanf("%d",&c2);
	
	system("clear");
	
	if(c1!=r2)
	{
		printf("Error!\nnumber of columns of (matrix)A\nmust be equals to the nunber of rows of (matrix)B.\n");
		return;
	}
	
	printf("Matrix A:\n");
	printf("Enter the elements(row major):\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	system("clear");
	
	printf("Matrix B:\n");
	printf("Enter the elements(row major):\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	
	system("clear");
		
	printf("Matrix A:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c1;j++)
		{
			printf("%d  ",a[i][j]);
			sum[i][j]=0;
		}
		printf("\n");
	}

	printf("\n\nMatrix B:\n");
	for(int i=0;i<r2;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d  ",b[i][j]);
		}
		printf("\n");
	}
	
	
	int i,j,k;
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2;k++)
			{
				sum[i][j]=sum[i][j]+( (a[i][k]) * (b[k][j]) );
			}
		}
	}
	
	
	printf("\n\nMultiplied matrix:\n");
	for(int i=0;i<r1;i++)
	{
		for(int j=0;j<c2;j++)
		{
			printf("%d  ",sum[i][j]);
		}
		printf("\n");
	}	
}
