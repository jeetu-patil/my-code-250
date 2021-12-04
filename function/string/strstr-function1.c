#include<stdio.h>
#include<string.h>
void check(char a[],char b[])
{
    int i,j=0,k,p=1,l;
    l=strlen(b);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==b[j])
        {
            p=i+1;
            for(k=j+1;b[k]!='\0';k++,p++)
            {
                if(a[p]==b[k])
                    continue;
                else
                    break;
            }
        }
        if(l==k)
        {
            for(k=i;a[k]!='\0';k++)
                printf("%c",a[k]);
            break;
        }
    }
}

int main()
{
    char a[50],b[50];
    printf("enter a string \n");
    gets(a);

    printf("enter a sub string \n");
    scanf("%s",b);

    check(a,b);
}