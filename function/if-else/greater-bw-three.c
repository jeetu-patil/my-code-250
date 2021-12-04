#include<stdio.h>

int compare(int a,int b,int c)
{
	if(a>b&&a>c)
		return a;
	else if(b>c)
		return b;
	else
		return c;
		
	
}

int main()
{
	int a,b,c,ans;
	printf("enter a three number\n");
	scanf("%d%d%d",&a,&b,&c);
	
	ans=compare(a,b,c);
	printf("%d is gretest\n",ans);
	
	return 0;
}
