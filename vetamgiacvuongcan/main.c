#include <stdio.h>
int main ()
{
	int a,c,b;
	scanf("%d",&b);
	for(a=b;a>=0;a--)
	{
		for(c=a;c>=0;c--)
		printf("*");
		printf("\n");
	}
}
