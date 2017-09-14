#include<stdio.h>
int n;
int a[50];
void show()
{
	int i;
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}printf("\n");
}
void bit(int u)
{
	if(u==n+1)
	{
		show();
		return;
	}	
	a[u]=0;
	bit(u+1);
	a[u]=1;
	bit(u+1);
}
int main()
{
	scanf("%d",&n);
	bit(1);
}
