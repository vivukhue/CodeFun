#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&c);
	scanf("%d",&d);
	for(a=0;a<c;a++)
	{
		for(b=0;b<d;b++)
		printf("#");
		printf("\n");
	}
}
