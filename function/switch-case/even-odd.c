#include<stdio.h>

void check(int a)
{
	switch(a%2)
	{
		case 0:
			printf("even\n");
			break;
		case 1:
			printf("odd\n");
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
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	
	check(a);
	return 0;
}
