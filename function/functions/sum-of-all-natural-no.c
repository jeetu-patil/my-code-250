#include<stdio.h>
#include<stdlib.h>
int sum=0;
void add(int n)
{
    sum=sum+n;
    if(n<=1)
        return ;
    add(--n);
    
}

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    
    add(n);
    printf("sum is %d\n",sum);   
}