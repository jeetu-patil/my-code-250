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
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			if(i==n||j==1||j==i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
