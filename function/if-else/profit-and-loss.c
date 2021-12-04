//profit loss
#include<stdio.h>

void profit(int cp,int sp)
{
	int profit,loss;
	profit=sp-cp;
	loss=cp-sp;	
	if(profit>loss)
		printf("profit is %d\n",profit);
	else if(profit<loss)
		printf("loss is %d\n",loss);
	else
		printf("niether profit or loss\n");
}
int main()
{
	int sp,cp;
	printf("enter selling price\n");
	scanf("%d",&sp);

	printf("enter cost price\n");
	scanf("%d",&cp);
	profit(cp,sp);
	return 0;
}
