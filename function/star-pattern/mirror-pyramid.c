#include<stdio.h>
void pyramid();

//main function
int main()
{
	pyramid();
	return 0;
}


//pyramid function
void pyramid()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
		for(j=1;j<=2*i-1;j++)
			printf("* ");
	
		printf("\n");
	}
}
