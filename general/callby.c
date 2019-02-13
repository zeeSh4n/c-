#include<stdio.h>

void swapv(int a , int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}

void swapr(int *a , int *b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}




void main()
{
	int a = 5,b=10, x;
	printf("\n========================================\n");
	printf("   CALL BY VALUE OR CALL BY REFERENCE");
	printf("\n========================================\n");
	
	
	printf("Initialized:\n");
	printf("a = %d b = %d",a,b);
	do
	{
		printf("\nPress:\n1.to swap by value.\n2.to swap by reference.\n3.to exit.\n=>");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
			printf("\n---Called by Value---\n");
			printf("before swap\na = %d b = %d",a,b);
			swapv(a,b);
			printf("\nafter swap by value\na = %d b = %d",a,b);
			break;
			case 2:
			printf("\n---Called by Reference---\n");
			printf("before swap\na = %d b = %d",a,b);
			swapr(&a,&b);
			printf("\nafter swap by reference\na = %d b = %d",a,b);
			break;
			case 3:
			break;
			default:
			printf("\nInvalid choice.\n");
		}
		
	}while(x!=3);
}



/*

========================================
   CALL BY VALUE OR CALL BY REFERENCE
========================================
Initialized:
a = 5 b = 10
Press:
1.to swap by value.
2.to swap by reference.
3.to exit.
=>1

---Called by Value---
before swap
a = 5 b = 10
after swap by value
a = 5 b = 10
Press:
1.to swap by value.
2.to swap by reference.
3.to exit.
=>2

---Called by Reference---
before swap
a = 5 b = 10
after swap by reference
a = 10 b = 5
Press:
1.to swap by value.
2.to swap by reference.
3.to exit.
=>7

Invalid choice.

Press:
1.to swap by value.
2.to swap by reference.
3.to exit.
=>3
*/
