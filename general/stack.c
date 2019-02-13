#include<stdio.h>
#include<stdlib.h>

void main()
{
	int key,stack[5],top=-1,i;
	
	do
	{
		printf(" \n*MENU*\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n=> ");
		scanf("%d",&key);
		system("clear");
		switch(key)
		{
			case 1:
			{
				if(top>=4)
				{
					printf("error!\nstack overflow!\n\n");
					break;
				}
				top++;
				printf("Enter the element: ");
				scanf("%d",&stack[top]);
				break;
			}
			case 2:
			{
				if(top==-1)
				{
					printf("error!\nstack underflow.\n\n");
					break;
				}
				printf("%d is deleted.",stack[top]);
				top--;
				break;
			}
			case 3:
			{
				if(top==-1)
				{
					printf("error!\nstack underflow.\n\n");
					break;
				}
				printf("\nStack elements:\n");
				for(i=0;i<=top;i++)
				printf(" %d ",stack[i]);
				printf("\n");
				break;
			}
		}
	}while(key!=4);
}
