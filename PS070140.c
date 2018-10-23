//該月份有哪幾天是週六
#include <stdio.h>
int main (void)
{
	int a,b,i;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
		if((i+b)%7==0)
		printf("%d ",i);
	}
	
	return 0;
 } 
