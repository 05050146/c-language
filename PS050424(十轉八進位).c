#include <stdio.h>
int main (void)
{
	int a,b,c,d;
	scanf("%d",&a);
	
	d=a%8;
	c=(a-d)/8;
	b=c/8;
	c%=8;
	
	printf("%d(d) = %d%d%d(o)",a,b,c,d);
	return 0;
}
