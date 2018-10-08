#include <stdio.h>
int main(void)
{
	int a,b,c,d,e;
	scanf("%d",&a);
	d=a%10;
	c=(a-d)%100/10;
	b=a/100;
	e=b*4+c*2+d;
	printf("%d=%d",a,e);
	return 0;
}
