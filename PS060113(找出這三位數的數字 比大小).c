#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	d=a%10;
	c=(a-d)%100/10;
	b=a/100;
	
	if(b>=c && b>=d)
	{
		if(c>d)
		printf("NIN=%d",d);
		else
		printf("NIN=%d",c);
	}
	
	else if(c>=b && c>=d)
	{
		if(b>d)
		printf("NIN=%d",d);
		else
		printf("NIN=%d",b);
	}
	
	else if(d>=b && d>=c)
	{
		if(b>c)
		printf("NIN=%d",c);
		else
		printf("NIN=%d",b);
	}
	return 0;
}
