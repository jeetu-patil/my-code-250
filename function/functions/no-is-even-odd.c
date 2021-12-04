#include<stdio.h>

void compare(int a)
{
	if(a%2==0)
		printf("number is even\n");
    else
        printf("number is odd\n");
        
}

int main()
{
	int a,b,c,ans;
	printf("enter a number\n");
	scanf("%d",&a);
	
	compare(a);
	
	return 0;
}
