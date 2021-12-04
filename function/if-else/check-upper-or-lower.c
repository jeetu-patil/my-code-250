#include<stdio.h>

void check(char);

int main()
{
	char n;
	printf("enter a character\n");
	scanf("%c",&n);

	return 0;
}


void check(char c)
{
	if(c>='A'&&c<='Z')
		printf("it is Upper\n");
	else
		printf("it is lower\n");
	
}
