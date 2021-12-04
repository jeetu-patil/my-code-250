#include<stdio.h>
#include<stdlib.h>

int add()
{
	int n,sum=0,i;
	printf("enter how many number you want to add\n");
	scanf("%d",&n);
	
	int a[n];
	printf("enter %d number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++)
		sum=sum+a[i];	
		
	return sum;
}

int multiply()
{
	int n,sum=1,i;
	printf("enter how many number you want to multiply\n");
	scanf("%d",&n);
	
	int a[n];
	printf("enter %d number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++)
		sum=sum*a[i];	
		
	return sum;
}

int subtract()
{
	int n,sum=0,i;
	printf("enter how many number you want to subtract\n");
	scanf("%d",&n);
	
	int a[n];
	printf("enter %d number\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	for(i=0;i<n;i++)
		sum=sum-a[i];	
		
	return sum;
}

int divide()
{
	int n,n1,sum;
	
	printf("enter two values\n");
	scanf("%d%d",&n,&n1);	
	sum=n/n1;	
		
	return sum;
}


int main()
{
	int ch,ans;
	while(1)
	{
		printf("enter 1 for add\n");
		printf("enter 2 for subtract\n");
		printf("enter 3 for divide\n");
		printf("enter 4 for multiply\n");
		printf("enter 5 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				ans=add();
				printf("add is %d\n",ans);
				break;
			case 2:
				ans=subtract();
				printf("subtract is %d\n",ans);
				break;
			case 3:
				ans=divide();
				printf("divide is %d\n",ans);
				break;
			case 4:
				ans=multiply();
				printf("multiply is %d\n",ans);
				break;
			case 5:
				exit(0);
			default :
				printf("invalid number\n");
		}
	}

	return 0;
}
