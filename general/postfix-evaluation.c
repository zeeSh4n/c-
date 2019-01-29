#include<stdio.h>
int stack[30];
int top=-1;
#define size 30

void push(int item)
{
	top++;
	stack[top]=item;
}
int operator(char item)
{
	if(item=='^' || item=='*' || item=='/' || item=='+' || item=='-')
	return 1;
	else
	return 0;
}
char pop()
{
	char x;
	x=stack[top];
	top--;
	return x;
}

int operation(char item)
{
	int a,b,c;
	switch(item)
	{
		case '*':
		a=pop();
		b=pop();
		c=(a*b);
		return c;
		break;
		case '/':
		a=pop();
		b=pop();
		c=(a/b);
		return c;
		break;
		case '+':
		a=pop();
		b=pop();
		c=(a+b);
		return c;
		break;
		case '-':
		a=pop();
		b=pop();
		c=(a-b);
		return c;
		break;
		case '^':
		a=pop();
		b=pop();
		c=1;
		if(b==0)
		return c;
		for(int i=0;i<b;i++)
		{
			c=c*a;
		}
		return c;
		break;
	}
}

void main()
{
	int i=0,x;
	char exp[30],item;
	
	printf("Enter postfix expression: ");
	scanf("%s",&exp);
	while(1)
	{
		item=exp[i];
		if(item=='\0')
		break;
		else
		{
			if(item>='0' && item<='9')
			{
				push(item-'0');
			}
			else if((item>='A' && item<='Z')||(item>='a' && item<='z'))
			{
				printf("Enter the value of %c: ",item);
				scanf("%d",&x);
				push(x);
			}
			else if(operator(item) == 1)
			{
				item = operation(item);
				push(item);
			}
			else
			{
				printf("Error!\nEnter a valid expression.\n");
				return;
			}
		}
		
		i++;
	}
	if(top!=0)
	printf("\nInvalid postfix Expression.\n");
	else
	printf("\nResult=%d\n",stack[top]);
}










