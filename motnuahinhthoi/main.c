#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=1;b<=a;b++)
		if(a==b)
		{
		printf("*");
		printf("\n");
		}
		else
		printf(" ");
		
	}
	for(a=1;a<=c;a++)
	{
		for(b=1;b<=c;b++)
		if((a+b)==c)
		printf("*");
		else
		printf(" ");
		printf("\n");
	}
}
