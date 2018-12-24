#include <stdio.h>
int afunc(int c[],int d);
int main(void)
{
	int a,b=0,c[80],d=0;
	scanf("%d",&a);
	while(a>0)
	{
		c[b++]=a%2;
		a/=2;
		d++;
	}
	printf("%d",afunc(c,d));
	
	return ;
}
int afunc(int c[],int d)
{
	int i,end=0;
	for(i=0;i<=d;i++)
	{
		if(c[i]==1)
		end++;
	}
	return end;
}
