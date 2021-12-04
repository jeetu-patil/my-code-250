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
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
				printf("* ");
		printf("\n");
	}
}
