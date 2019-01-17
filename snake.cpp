#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int width=50,height=20;
int snakeX,snakeY,foodX,foodY,score=1,key,gameOver=0;
int tailX[50],tailY[50];


void scoring()
{
	if(snakeX == foodX && snakeY == foodY)
	{
		label3:
		foodX = rand()%width;
		label4:
		foodY = rand()%height;
		if(foodX>=width || foodX<=0)
		goto label3;
		if(foodY>=height || foodY<=0)
		goto label4;
		score++;
	}
	else if(snakeX>=width || snakeX<=0 || snakeY>=height-1 || snakeY<=0)
	gameOver = 1;
	
	int k;
	int prevX=tailX[0];
	int prevY=tailY[0];
	int prev2X,prev2Y;
	tailX[0]=snakeX;
	tailY[0]=snakeY;
	for(k=1;k<score;k++)
	{
		prev2X=tailX[k];
		prev2Y=tailY[k];
		tailX[k]=prevX;
		tailY[k]=prevY;
		prevX=prev2X;
		prevY=prev2Y;
		
	}
}



void input()
{
	char ch;
	if(kbhit())
	{
		ch=getch();
		switch(ch)
		{	
			case 'w':
				key=1;
				break;
			case 'a':
				key=2;
				break;
			case 's':
				key=3;
				break;
			case 'd':
				key=4;
				break;
		}
	}
	
}





void initSetup()
{
	snakeX = width/2;
	snakeY = height/2;
	label1:
	foodX = rand()%width;
	label2:
	foodY = rand()%height;
	if(foodX>width || foodX<0)
	goto label1;
	if(foodY>height || foodY<0)
	goto label2;
}


void draw()
{
	int i,j,k;
	system("cls");
	for(i=0;i<height;i++)
	{
		for(j=0;j<width;j++)
		{
			if(i==height-1|| i==0 || j==0 || j==width-1)
			{
				printf("#");
			}
			else
			{
				int flag=0;
				if(i==snakeY && j==snakeX)
				{
					printf("O");
					flag++;
				}
				else if(i==foodY && j==foodX)
				{
					printf("x");
					flag++;
				}
				else
				{
					for(k=0;k<score;k++)
					{
						if(i==tailY[k] && j==tailX[k])
						{
							printf("o");
							flag++;
						}
					}
				}
				if(flag==0)
				printf(" ");
			}
		}
		printf("\n");
	}
	switch(key)
	{
		case 1:
			snakeY--;
			break;
		case 2:
			snakeX--;
			break;
		case 3:
			snakeY++;
			break;
		case 4:
			snakeX++;
			break;
		default:
			break;		
	}
	printf("score: %d",score-1);
}

int main()
{
	initSetup();
	while(!gameOver)
	{
		scoring();
		draw();
		input();
	}
	
	return 0;
}
