#include<stdio.h>
#include<string.h>
void check(char a[],char b[])
{
    int i,j,k=0,f=0,p;
    char c[100];
    for(i=0;a[i]!='\0';i++)
    {
        for(p=i+1;b[p]!='\0';p++)
        {
            if(a[i]==b[p])
            {
                for(j=i;a[j]!='\0';j++,k++)
                {
                    if(a[j]==b[j])
                    {
                        c[k]=a[j];
                        printf("%c   ",c[k]);
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f)
                    break;
            }
        }
    }
    if(f)
        printf("string is not present");
    else
    {
         a[k]='\0';
        printf("string is %s\n",c);
    }
}

int main()
{
    char a[50],b[50];
    printf("enter 1st string\n");
    gets(a);

    printf("enter 2nd string\n");
    gets(b);

    check(a,b);
}