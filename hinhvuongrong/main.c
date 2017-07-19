#include <stdio.h>
int main() 
{
	int a,b,c;
	scanf("%d",&c);
	for(a=1;a<=c;a++)
	{
		for(b=1;b<=c;b++){
			if(a==c||b==c||a==1||b==1||(a+b)%2==0)
			printf("*");
			else
			printf(" ");}
			printf("\n");
	}
}
