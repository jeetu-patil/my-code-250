#include<stdio.h>
#include<stdlib.h>

float radiuos(float v,float h)
{
	float ans;
	ans=v/3.14*h;
	return ans;
}


float radiuos(float v,float h)
{
	float ans;
	ans=v/3.14*h;
	return ans;
}

int main()
{
	int ch;
	float ans,c,v;
	while(1)
	{
		printf("enter 1 for radious\n");
		printf("enter 2 for circumfrence\n");
		printf("enter 3 for volume\n");
		printf("enter 4 for exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("enter height\n");
				scanf("%f",&c);
				printf("enter volume\n");
				scanf("%f",&v);
				ans=radious(c);
				printf("add is %f\n",ans);
				break;
			case 2:
				printf("enter circumfrence\n");
				scanf("%f",&c);
				ans=circumfrence(c);
				printf("subtract is %f\n",ans);
				break;
			case 3:;
				printf("enter volume\n");
				scanf("%f",&c);
				ans=volume(c)
				printf("divide is %f\n",ans);
				break;
			case 4:
				exit(0);
				
			default :
				printf("invalid number\n");
		}
	}

	return 0;
}
