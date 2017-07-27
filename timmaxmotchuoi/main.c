#include<stdio.h>
int main()
{
	int arr[50],i,N;
	printf("Nhap so phan tu cho chuoi 1: ");
	scanf("%d",&N);
	
	for(i=0;i<N;i++)
	{
		printf("Nhap vao phan tu thu %d cho chuoi 1: ",i+1);
		scanf("%d",&arr[i]);
	}
	int imax=arr[0];
	for(i=1;i<=N-1;i++)
	{
			if(imax<arr[i])
			{
				imax=arr[i];
			}
			else
				imax=imax;
	}
	printf("%d",imax);
}
