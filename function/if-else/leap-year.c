// leap year
#include<stdio.h>
int main()
{
	int year;
	printf("enter year\n");
	scanf("%d",&year);

	if(year%4==0||year%400==0)
		printf("it is leap year\n");
	else
		printf("it is not leap year\n");
	return 0;
}
