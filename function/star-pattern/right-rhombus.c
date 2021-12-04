#include<stdio.h>
void rhombus();

//main function
int main()
{
	rhombus();
	return 0;
}


//rhombus function
void rhombus()
{
	int i,j,n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf(" ");
		for(j=1;j<=n;j++)
			printf("* ");

		printf("\n");
	}
}
