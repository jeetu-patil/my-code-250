#include<stdio.h>

int check(int,int,int);

int main()
{
	int a,b,c;
	printf("enter a three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	
	check(a,b,c);
	return 0;
}

int check(int a,int b,int c)
{
	if(a==b&&b==c)
		printf("equilateral\n");
	else if(a==b||b==c||a==b)
		printf("isoclese triangle\n");
	else
		printf("scalane\n");
}
