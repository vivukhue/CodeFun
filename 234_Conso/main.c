#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	for(c=1;c<=b;c++)
	{
		if(c%a==0)
		printf("%d\n",c);
	}
}
