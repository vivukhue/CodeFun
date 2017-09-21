#include<stdio.h>
#include <string.h>
int langoac(char a)//kiem tra xem 1 ki tu co la ngoac ko
{
	int i;
	char ngoac[]={'(',')','<','>','{','}','[',']'};
	for( i=0;i<strlen(ngoac);i++)
	{
		if(a==ngoac[i])
		return 1;
	}
	return 0;
}
int ngoachople(char a,char b)//kiem tra xem co phai la 1 cap ngoac hop le ko
{
	if((a=='('&&b==')')
	  ||(a=='<'&&b=='>')
	  ||(a=='['&&b==']')
	  ||(a=='{'&&b=='}'))
	return 1;
	else 
	return 0;		
}
int kiemtra(char *arr)
{
	int ij;
	char stack[50];
	int k=0;
	for(ij=0;ij<strlen(arr);ij++)
	{
		if(langoac(arr[ij]))
		{
			stack[k]=arr[ij];
			k=k+1;
		}
		if(ngoachople(stack[k-1],stack[k]))
		k=k-1;
	}
	if(k>0)
	return 0;
	else
	return 1;
}

int main()
{
	char string1[] = "a[b]c";
    char string2[] = "} abc {";
    char string3[] = "<ok string [good]>";
    char string4[] = "DEF ]<>";
    char string5[] = "Open but not close (///";
    char string6[] = "a[b[c<def>m{n]pq}]()";

    //printf("string1: %d\n", kiemtra(string1));
    //printf("string2: %d\n", kiemtra(string2));
    //printf("string3: %d\n", kiemtra(string3));
    //printf("string4: %d\n", kiemtra(string4));
   // printf("string6: %d\n", kiemtra(string6));
    return 0;
}
