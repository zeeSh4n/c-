#include<stdio.h>
char stack[30], res[30];
int top=-1;
#define size 30

void push(char item)
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
int priority(char x)
{
	if(x=='^')
	return 3;
	else if(x=='*' || x=='/')
	return 2;
	else if(x=='+' || x=='-')
	return 1;
}

void main()
{
	int i=0,j=0;
	char exp[30];
	char item='a',temp;
	printf("enter the expression: ");
	scanf("%s",&exp);
	while(1)
	{
		item = exp[i];
		if(item=='\0')
		break;
		else if(item=='(')
		push(item);
		else if((item >= 'a' && item <= 'z')||(item >= 'A' && item <= 'Z'))
		{
			res[j]=item;
			j++;
		}
		else if((item >= '0' && item <= '9'))
		{
			res[j]=item;
			j++;
		}
		else if(operator(item)==1)
		{
			if(top==-1)
			{
				push(item);
			}
			else
			{
				temp=pop();
				while(operator(temp)==1 && priority(temp) <= item)
				{
					res[j]=temp;
					j++;
					temp=pop();
				}
				push(temp);
				push(item);
			}
		}
		else if(item==')')
		{
			temp=pop();
			while(temp!='(')
			{
				res[j]=temp;
				j++;
				temp=pop();
			}
		}
		else
		{
			printf("\nplease enter a valid infix expression!\n");
			return;
		}
		i++;
	}
	while(top != -1)
	{
		res[j]=pop();
		j++;
	}
	res[++i] = '\0';
	printf("\ninfix = %s\n",exp);
	printf("\npostfix exp= %s\n\n",res);
}
