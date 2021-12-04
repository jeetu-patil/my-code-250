#include<stdio.h>

void check(char a[])
{
	int i,a1=0,s=0;
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]>='U')
            a1++;
        else
            s++;
    }
    printf("vowel=%d   consonent=%d   \n",a1,s);
}

int main()
{
	char a[50];
	printf("enter a string\n");
	scanf("%s",&a);
	
	check(a);
	return 0;
}
