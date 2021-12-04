#include<stdio.h>
void arrow();

//main function
int main()
{
	arrow();
	return 0;
}


//arrow function
void arrow()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
			printf("*");
			
		printf("\n");
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
			printf("*");
			
		printf("\n");
	}
}
