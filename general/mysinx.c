#include<stdio.h>
#include<math.h>
float PI = 3.14159;

float mycosx(float m)
{
	float x, sum = 1 , term =1;
	x = (PI/180)*m;
	int i = 1;
	do
	{
		term = (term*(x*x) / (i*(i+1)*(-1)));
		sum = sum+term;
		i = i+2;
	}while(fabs(term)>=0.00001);
	return sum;
}

float mysinx(float m)
{
	float x, sum =0 , term;
	x = (PI/180)*m;
	int i = 3;
	term = x;
	do
	{
		sum = sum+term;
		term = (term*(x*x) / (i*(i-1)*(-1)));
		i = i+2;
	}while(fabs(term)>=0.00001);
	return sum;
}

void main()
{
	float x,sin , cos;
	int a;
	printf("\nEnter angle in degree: ");
	scanf("%f",&x);
	cos = mycosx(x);
	sin = mysinx(x);
	printf("the value of cos(%.2f) = %f\n",x,cos);
	printf("the value of sin(%.2f) = %f\n",x,sin);
}

