// positive or negative
#include<stdio.h>

int check(int n)
{
	if(n>0)
		return 1;
	else
		return 0;
} 
int main()
{
	int no1;
	printf("enter a number\n");
	scanf("%d",&no1);

	if(check(no1))
		printf("number is positive\n");
	else
		printf("number is negative\n");
 
	return 0;
}
