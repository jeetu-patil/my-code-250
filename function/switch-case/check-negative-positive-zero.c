#include<stdio.h>

void check(int a)
{
	switch(a>0||a<0)
	{
		case 0:
			printf("zero\n");
			break;
		case 1:
			if(a>0)
				printf("positive\n");
			else
				printf("negative\n");
			break;
		
	}
}


int main()
{
	int a;
	printf("enter a number\n");
	scanf("%d",&a);
	
	check(a);
	return 0;
}
