#include<stdio.h>
void cross();

//main function
int main()
{
	cross();
	return 0;
}


//cross function
void cross()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		if(i==j||j==n-i+1)
			printf("*");
		else
			printf(" ");
			
		printf("\n");
	}
}
