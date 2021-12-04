#include<stdio.h>
void square();

//main function
int main()
{
	square();
	return 0;
}


//square function
void square()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1||j==1||i==n||j==n||j==n-i+1||i==j)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}
