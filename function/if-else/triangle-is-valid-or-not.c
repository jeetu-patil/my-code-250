#include<stdio.h>

int check(int,int,int);

int main()
{
	int a,b,c;
	printf("enter a three sides of triangle\n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(check(a,b,c))
		printf("its valid\n");
	else
		printf("inavlid\n");
	return 0;
}

int check(int a,int b,int c)
{
	if(a==b&&b==c)
		return 1;
	else
		return 0;
}
