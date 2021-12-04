#include<stdio.h>
#include<stdlib.h>
int ev=0,od=0;
void evenodd(int n,int i)
{
    if(i>n)
        return;
    if(i%2==0)
        ev=ev+i;
    else    
        od=od+i;
    evenodd(n,++i);
}

int main()
{
    int n,i;
    printf("enter a limit\n");
    scanf("%d",&n);
    i=1;
    evenodd(n,i);
    printf("even=%d   odd=%d\n",ev,od);
        
}