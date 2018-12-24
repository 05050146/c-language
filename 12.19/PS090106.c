#include <stdio.h>
int afunc(int a[],int b[]);
int main(void)
{
	int a[10],b[10];
	int i=0,j=0,m,n;
	
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
		
	}
	for(i=0;i<10;i++)
	{
		scanf("%d",&b[i]);
		if(b[i]==0)
		break;
		
	}
	printf("%d",afunc(a,b));
	
	return 0;
	
}
int afunc(int a[],int b[])
{
	int i,end=0;
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]!=b[i])
		end++;
	}
	return end;
}
