#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

char* stringReverse(char *str)
{
	int i,j,temp;
	for(i=0,j=strlen(str)-1;i<j;i++,j--)
	{
		temp = *(str+i);
		*(str+i) = *(str+j);
		*(str+j) = temp;
	}
	return str;
}

char* decimalToOther(char *num,int ob)
{
	char *result;
	int m,n;

	result = (char*)malloc(sizeof(char)*20);
	n = atoi(num);
	m=n;
	
	int i = -1;
	while(m>0)
	{
		i++;
		if(m%ob <= 9)
		{
			*(result+i)= (m%ob)+48;
		}
		else
		{
			*(result+i)=(m%ob)%10 +65;
		}
		m = m/ob;
	}
	result = stringReverse(result);	
	return result;
}

char* otherToDecimal(char *num,int ib)
{
	int sum=0,i,power=1;
	int len = strlen(num);
	char *result;
	result = (char*)malloc(sizeof(char)*20);
	for(i=len-1;i>=0;i--)
	{
		if(*(num+i)>=65)
		sum = sum+ (*(num+i)-55)*power;
		else
		sum = sum+ (*(num+i)-48)*power;
		power = power*ib;
	}
	i=0;
	while(1)
	{
		if(sum%10 >=65)
		*(result+i) = (sum%10)+55;
		else
		*(result+i) = (sum%10)+48;
		sum = sum/10;
		i++;
		if(sum%10 == 0)
		break;
	}
	*(result+strlen(result)+1) = '\0';
	*(result+strlen(result)+1) = '\0';
	result = stringReverse(result);
	return result;
	
}

char* other2other(char *number,int ib,int ob)
{
	char *d;
	d = (char*)malloc(sizeof(char)*20);
	d = otherToDecimal(number,ib);
	return decimalToOther(d,ob);
}

void main()
{
	char number[20],*result;
	int ib,ob;
	printf("Enter Input base: ");
	scanf("%d",&ib);
	printf("Enter Output base: ");
	scanf("%d",&ob);
	printf("Enter Number: ");
	scanf("%s",number);
	if((ib==10)&&(ob!=10))
	result = decimalToOther(number,ob);
	if((ib!=10)&&(ob==10))
	result = otherToDecimal(number,ib);
	if((ib!=10)&&(ob!=10))
	result = other2other(number,ib,ob);
	printf("Input Base: %d\tOutput Base: %d\n",ib,ob);
	printf("Input Number: %s\nOutput Number: %s\n",number,result);
}
