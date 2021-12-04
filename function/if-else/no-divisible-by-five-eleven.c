#include<stdio.h>
int main()
{
	int no;
	printf("enter a no\n");
	scanf("%d",&no);

	if(no%5==0&&no%11==0)
		printf("no is divisible");
	else
		printf("no is not divisible");
	return 0;
}
