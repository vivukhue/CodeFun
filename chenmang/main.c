#include <stdio.h>
#include <stdlib.h>

void nhapchuoi()
{
	int arr[50],chuoi[50],a,b,m,n,k,j,i;
	printf("Nhap so phan tu cho chuoi 1: ");
	scanf("%d",&m);
	
	for(a=0;a<m;a++)
	{
		printf("Nhap vao phan tu thu %d cho chuoi 1: ",a+1);
		scanf("%d",&arr[a]);
	}
	printf("Nhap so phan tu cho chuoi 2 : ");
	scanf("%d",&n);
	
	
	for(b=0;b<n;b++)
	{
		printf("Nhap vao phan tu thu %d cho chuoi 2 : ",b+1);
		scanf("%d",&chuoi[b]);
	}
	
	
	printf("Nhap vao vi tri can chen : ");
	scanf("%d",&k);
	int N =  m;
	int M =  n;
   for(i=N-1;i>=k;i--)
    {
    	arr[i+M]=arr[i];
    	arr[i]='\0';
    	
	}
	for( j=M-1;j>=0;j--)
	{
		arr[j+k]=chuoi[j];
	}
	    for (i = 0; i < N+M; i++) {
			printf("%d\n", arr[i]);
    }
}
	
int main()
{
	nhapchuoi();
	return 0;
}
