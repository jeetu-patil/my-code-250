#include<stdio.h>

int max(int a,int b)
{
	switch(a>b)
	{
		case 0:
			return b;
			break;
		case 1:
			return a;
			break;
		
	}
}

int min(int a,int b)
{
	switch(a<b)
	{
		case 0:
			return b;
			break;
		case 1:
			return a;
			break;
		
	}
}

int main()
{
	int a,b,x;
	printf("enter a two number\n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	x=max(a,b);
	printf("max no is %d\n",x);
	
	x=min(a,b);
	printf("min no is %d\n",x);
	return 0;
}
