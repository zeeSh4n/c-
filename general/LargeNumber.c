//POlYNOMIAL ADDITION.
#include<stdio.h>
#define MAX 100		//Assuming maximumm exponent is less than 100.	
void read_polynomial(int*);
void show_polynomial(int*);
void add_polynomial(int*,int*,int*);
void subtract_polynomial(int*,int*,int*);
void multiply_polynomial(int*,int*,int*);

int main()
{
	int poly1[100]={0},poly2[100]={0};
//	int sumPoly[100]={0};
//	int subtract[100]={0};
	

	printf("\n\tEnter 1st polynomial : ");
	read_polynomial(poly1);
	printf("\n\tEnter 2nd polynomial : ");
	read_polynomial(poly2);
	printf("\n1st polynomial : ");
	show_polynomial(poly1);
	printf("\n2nd polynomial : ");
	show_polynomial(poly2);	
/*
	add_polynomial(poly1,poly2,sumPoly);
	printf("\nSum of Polynomials:\n");
	show_polynomial(sumPoly);
	

	subtract_polynomial(poly1,poly2,subtract);
	printf("\nSubtraction of Polynomials:\n");
	show_polynomial(subtract);	
*/	

	printf("\nMultiplication of Polynomials:\n");
	int result[100]={0};
	multiply_polynomial(poly1,poly2,result);
	show_polynomial(result);
	return 0;
}

void multiply_polynomial(int *a1,int *a2,int *res)
{
	int i,temp[MAX]={0},flag=0;
	temp[0]=1;
	for(i=0;i<MAX;i++)
		*(res+i)=*(a1+i);
	subtract_polynomial(a2,temp,a2); //a2=a2-1
	
	
	while(flag!=1)
	{
		int x[MAX]={0};
		add_polynomial(res,a1,x);  // res=a1+res
		//res=x
		for(i=0;i<MAX;i++)
			*(res+i)=*(x+i);
		subtract_polynomial(a2,temp,a2); //a2=a2-1
		for(i=MAX-1;i>=0;i--)	//checking if 2nd no. is zero or not.
		{
			if(*(a2+i)!=0)
			{
				flag=0;
				break;
			}
			else
			flag=1;
		}
	}
/*		int x[MAX]={0};
		subtract_polynomial(res,a1,x);
		for(i=0;i<MAX;i++)
			*(res+i)=*(x+i);
*/
}


void subtract_polynomial(int *poly1,int *poly2,int *res)
{
	int borrow=0 ,*arr1,*arr2, i,temp=0;
	for(i=MAX-1;i>=0;i--) //comparing the greater one
	{
		if((*(poly1+i) < *(poly2+i))&&(*(poly1)!=0))
		{
			temp=1;
			break;
		}
	}
	if(temp==1)
	{
		arr1=poly2;		//here goes greater one
		arr2=poly1;		//here goes smaller one
	}
	else
	{
		arr1=poly1;		//here goes greater one
		arr2=poly2;		//here goes smaller one
	}
	
		
	for(i=0;i<MAX;i++)
	{
		temp=*(arr1+i);
		if(borrow==1)
		{
			temp-=1;
			borrow=0;
		}
		*(res+i)=temp-*(arr2+i);
		if(*(res+i)<0)
		{
			*(res+i)+=10;
			borrow=1;
		}
		
		
	}
	
}

void read_polynomial(int *arr)
{
	int exp,i,temp;
	for(i=0;i<MAX;i++)
	{
		printf("\nEnter 0 to Quit:\n Coefficient: ");
		scanf("%d",&temp);
		if(temp==0)
			return;
		printf(" Exponent: ");
		scanf("%d",&exp);
		if(exp>100)
		{
			printf("\nASSUMPTION! Exponent must be less than 100\n");
			break;
		}
		else
		*(arr+exp)=temp;
		
	}
}

void show_polynomial(int *arr)
{
	int i,maxIndex;
	for(i=MAX-1;i>0;i--)	//To find max index for not printing extra '+' .
	{
		if(*(arr+i)!=0)
		{
			maxIndex=i;
			break;
		}
	}
	
	for(i=0;i<MAX;i++)
	{
		if(maxIndex==i)
		{
			printf("%d*10^%d",*(arr+i),i);
		}
		else if(*(arr+i)!=0)
		{
			printf("%d*10^%d + ",*(arr+i),i);
		}
	}
}

void add_polynomial(int *arr1,int *arr2,int *sum)
{
	int i,carry=0;
	for(i=0;i<MAX;i++)
	{
		*(sum+i)=(carry+*(arr1+i)+*(arr2+i))%10;
		carry=(carry+*(arr1+i)+*(arr2+i))/10;
	}
}


/*
	OUTPUT
	
	
    Enter 1st polynomial :
Enter 0 to Quit:
 Coefficient: 5
 Exponent: 1

Enter 0 to Quit:
 Coefficient: 6
 Exponent: 12

Enter 0 to Quit:
 Coefficient: 7
 Exponent: 17

Enter 0 to Quit:
 Coefficient: 0

        Enter 2nd polynomial :
Enter 0 to Quit:
 Coefficient: 9
 Exponent: 1

Enter 0 to Quit:
 Coefficient: 6
 Exponent: 44

Enter 0 to Quit:
 Coefficient: 7
 Exponent: 12

Enter 0 to Quit:
 Coefficient: 7
 Exponent: 17

Enter 0 to Quit:
 Coefficient: 6
 Exponent: 27

Enter 0 to Quit:
 Coefficient: 2
 Exponent: 18

Enter 0 to Quit:
 Coefficient: 0

1st polynomial : 5*10^1 + 6*10^12 + 7*10^17
2nd polynomial : 9*10^1 + 7*10^12 + 7*10^17 + 2*10^18 + 6*10^27 + 6*10^44
Sum of Polynomials: 1*10^0 + 4*10^1 + 1*10^11 + 3*10^12 + 1*10^16 + 4*10^17 + 2*10^18 + 6*10^27 + 6*10^44
--------------------------------

*/

