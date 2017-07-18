#include <stdio.h>
int main ()
{
	int a;
	for(a=0;a<=100;a++)
	if((a<50||a>70)&&a%2==0)
	printf("%d\n",a);
}
