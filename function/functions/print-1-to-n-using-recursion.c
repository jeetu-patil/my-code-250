#include<stdio.h>
#include<stdlib.h>
void print(int n)
{
    if(n<2)
        return;
    print(--n);
    printf("%d\n",n);
}

int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d",&n);
    print(n+1);
        
}