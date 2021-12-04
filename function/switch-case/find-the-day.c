#include<stdio.h>

void day(int n)
{
	switch(n)
	{
		case 1:
			printf("sunday\n");
			break;
		case 2:
			printf("monday\n");
			break;
		case 3:
			printf("tuesday\n");
			break;
		case 4:
			printf("wednesday\n");
			break;
		case 5:
			printf("thursday\n");
			break;
		case 6:
			printf("friday\n");
			break;
		case 7:
			printf("saturday\n");
			break;
		default :
			printf("invalid number\n");
	}
}

int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	day(n);
	return 0;;
}
