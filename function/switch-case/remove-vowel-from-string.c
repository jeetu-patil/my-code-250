#include<stdio.h>

int remove(char a[])
{
	int i,c=0;
	for(i=0;a[i]!='\0';i++)
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		{
			for(int j=i;a[i]!='\0';j++)
				a[j]=a[j+1];
			c++;
		}
}

int main()
{
	char a[50];
	int x;
	printf("enter a string\n");
	scanf("%[^/n]%*c",a);
	
	x=remove(a);
	for()
	return 0;
}
