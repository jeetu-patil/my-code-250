// sum of n number
#include<stdio.h>
int sum=0;
void display(int n,int a[])
{
    sum=a[n]+sum;
    if(n<=0)
        return;
    display(--n,a);
}
int main()
{
	int n;

	printf("enter limit\n");
	scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
	
	display(n-1,a);
    printf("sum is %d\n",sum);
	return 0;
}
