#include <stdio.h>
int afunc(int a[]);
int main (void)
{
	int a[80],i;
	
	for(i=0;i<8;i++)
	scanf("%d",a[i]);
	
	printf("=%s",afunc(a));
	
	return 0;
}
int afunc(int a[])
{
	int i,end,b[90],j=0;
	for(i=0;a[i]!=0;i++)
	;
	end=i;
	for(i=end-1;i>=0;i--)
	{
		b[j++]=a[i];
		
	}
	return b;
	
}
