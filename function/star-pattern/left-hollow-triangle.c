#include<stdio.h>
void triangle();

//main function
int main()
{
	triangle();
	return 0;
}


//triangle function
void triangle()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=i;j++)
		{
			if(i==j||j==1||i==n)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
