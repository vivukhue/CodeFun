#include<stdio.h>
#include<string.h>
#include<stdbool.h>
void erase(char arr[])
{
    int i;
    for(i=1;i<=strlen(arr);i++)
    {
        arr[i-1]=arr[i];
    }
}
void swap(char arr[],char string[])
{
	int k=strlen(arr);
    char ans[k];
    strcpy(ans,arr);
    strcpy(arr,string);
    strcpy(string,ans);
}
void add(char arr[],char a)
{
	int i;
	int n=strlen(arr);
	for(i=n-1;i>=0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=a;
	arr[n+1]='\0';
}
int main()
{
	char a[50],b[50],result[50]="0";
	int i,ij;
	bool neg=0;
	scanf("%s",&a);
	scanf(" %s",&b);
	while(strlen(a)<strlen(b))
		add(a,'0');
	while(strlen(b)<strlen(a))
		add(b,'0');
	if(a[0]<b[0])
	{
		swap(a,b);
		neg=1;
	}
	int carry=0,rem;
	char n;
	for(i=strlen(a)-1;i>=0;i--)
	{
		rem=a[i]-'0'-(b[i]-'0')-carry;
		carry=0;
		if(rem<0)
		{
			carry=1;
			rem=rem+10;
		}
		n=(char)rem+'0';
		add(result,n);
	}
	if(result[0]=='0')
	{
		erase(result);
	}
	if(neg)
	{
		add(result,'-');
	}
	result[strlen(result)-1]='\0';
	printf("%s",result);
}
