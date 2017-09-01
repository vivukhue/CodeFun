#include<stdio.h>
#include<string.h>
int power(int i,int ij)
{
	int k,N=1;
	for(k=1;k<=ij;k++)
		N=N*i;
	return N;
}
int hex(char N)
{
	int i;
	if(N>='0'&&N<='9')
	{
		i=N-48;
	}
	else if(N>='A'&&N<='F')
	{
		i=N-55;
	}
	return i;
}
int main()
{
	char arr[50],N,k;
	int ij,i,a,b=0,c;
	scanf("%s",&arr);
	k=strlen(arr);
	for(ij=0;ij<strlen(arr)/2;ij++)
	{
		N=arr[ij];
		arr[ij]=arr[strlen(arr)-1-ij];
		arr[strlen(arr)-1-ij]=N;
	}
	for(a=0;a<k;a++)
	{
		b=b+hex(arr[a])*power(16,a);	
	}
	printf("%d",b);
}
