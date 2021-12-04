#include<stdio.h>

void check(char ch)
{
	int i;
	switch(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		case 0:
			printf("consonent\n");
			break;
		case 1:
			printf("vowles\n");
			break;
		
	}
}

int main()
{
	char ch;
	printf("enter a character\n");
	scanf("%c",&ch);
	
	check(ch);
	return 0;
}
