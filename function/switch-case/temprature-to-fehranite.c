//temprature to fehranite
#include<stdio.h>
int main()
{
	char ch;
	float celcius,fehrnite;

	printf("enter C for change celsius to fernite\n");
	printf("enter F for change fernite to celcius\n");
	scanf("%c",&ch);

	if(ch=='c'||ch=='C')
	{
		printf("enter celcius\n");
		scanf("%f",&celcius);
		fehrnite=(9/5.0f*celcius)+32;
		printf("fehrnite is :%.2f\n",fehrnite);
	}
	else if(ch=='f'||ch=='F')
	{
		printf("enter fehrnite\n");
		scanf("%f",&fehrnite);
		celcius=(fehrnite-32)*5/9.0f;
		printf("celcius is :%.2f\n",celcius);
	}
	else
		printf("invalid choice");
	
	return 0;
}
