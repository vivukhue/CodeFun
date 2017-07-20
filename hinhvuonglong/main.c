#include <stdio.h>
int main() 
{
	int a,b,N;
	scanf("%d",&N);
	for(a=1;a<=(N+1)/2;a++)
	{
		for(b=1;b<=N;b++)
		if(a+b==(N+1)/2+1||b-a==(N+1)/2-1||b==1||b==N||a==1)
		printf("*");
		else
		printf(" ");
		printf("\n");
	}
	for(a=0;a<(N+1)/2;a++)
	{
		for(b=0;b<N;b++){
		if(b==0||a==(N+1)/2-1||(a+b)==N-1||b==N-1||a==b)
		printf("*");
		else
		printf(" ");}
		printf("\n");
	}
}
