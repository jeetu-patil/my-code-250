#include<stdio.h>
void diamond();

//main function
int main()
{
	diamond();
	return 0;
}


//diamond function
void diamond()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	
	for(i=1;i<=2*n-1;i++)
	{
		if(i<=n)
			for(j=1;j<=i;j++)
				printf("*");
		else
			for(j=1;j<=(2*i-1)-i+1;j++)
				printf("*");
			
		printf("\n");
	}
}
