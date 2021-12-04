#include<stdio.h>
#include<string.h>
void check(char a[])
{
    int i,f=0,j,k;
    char temp;
    for(i=0;a[i]!='\0';i++)
    {
        f=0;
        if(a[i]==1)
            continue;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                a[j]=1;
                f++;
            }
        } 
        if(f)
            printf("%c\n",a[i]);
    }
}

int main()
{
    char a[50];
    gets(a);

    int i;
    
    check(a);
}