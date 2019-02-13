#include<stdio.h>
#include<stdlib.h>


int add(int a,int b)
{
	int c = a+b;
	return c;
}

int sub(int a,int b)
{
	int c = a-b;
	return c;
}

int mul(int a,int b)
{
	int c = a*b;
	return c;
}

float divide(int a,int b)
{
	
	float c ;
	c = (float)a/b;
	return c;
}

void main()
{
	int x, num1 ,num2;
	float result;
	
	printf("\n=======================\n");
	printf("   BASIC CALCULATOR");
	printf("\n=======================\n");
	
	do{
		printf("\n\n*** MENU ***");
		printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n=> ");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
			printf("Enter 1st number: ");
			scanf("%d",&num1);
			printf("Enter 2nd number: ");
			scanf("%d",&num2);
			result = add(num1 , num2);
			printf("\n\tresult(%d+%d) = %.0f",num1,num2,result);
			break;
			case 2:
			printf("Enter 1st number: ");
			scanf("%d",&num1);
			printf("Enter 2nd number: ");
			scanf("%d",&num2);
			result = sub(num1 , num2);
			printf("\n\tresult(%d-%d) = %.0f",num1,num2,result);
			break;
			case 3:
			printf("Enter 1st number: ");
			scanf("%d",&num1);
			printf("Enter 2nd number: ");
			scanf("%d",&num2);
			result = mul(num1 , num2);
			printf("\n\tresult(%d*%d) = %.0f",num1,num2,result);
			break;
			case 4:
			printf("Enter numerator  : ");
			scanf("%d",&num1);
			printf("Enter denominator: ");
			scanf("%d",&num2);
			if(num2==0)
			{
				printf("\tDenominator can't be Zero.");
				break;
			}
			result = divide(num1 ,num2);
			printf("\n\tresult(%d/%d) = %.2f",num1,num2,result);
			break;
			case 5:
			break;
			default:
			printf("\n\tInvalid option.");
		}
	//	printf("\n");
		
		
	}while(x!=5);
}

/*
=======================
   BASIC CALCULATOR
=======================


*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 1
Enter 1st number: 77
Enter 2nd number: 45

	result(77+45) = 122

*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 2
Enter 1st number: 998
Enter 2nd number: 7

	result(998-7) = 991

*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 3
Enter 1st number: 15
Enter 2nd number: 7

	result(15*7) = 105

*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 4
Enter numerator  : 799
Enter denominator: 0
	Denominator can't be Zero.

*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 4
Enter numerator  : 75
Enter denominator: 5

	result(75/5) = 15.00

*** MENU ***
1.Addition
2.Subtraction
3.Multiplication
4.Division
5.Exit
=> 5
*/






