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
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("* ");
		printf("\n");
	}
}
