#include<stdio.h>
void plus();

//main function
int main()
{
	plus();
	return 0;
}


//plus function
void plus()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		if(i==n/2+1||j==n/2+1)
			printf("*");
		else
			printf(" ");
			
		printf("\n");
	}
}
