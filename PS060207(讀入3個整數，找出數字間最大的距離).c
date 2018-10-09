#include <stdio.h>
int main(void)
{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
		if(b>=c)
		printf("DIFF=%d",a-c);
		else
		printf("DIFF=%d",a-b);
	}
	
	else if(b>=c && b>=a)
	{
		if(a>=c)
		printf("DIFF=%d",b-c);
		else
		printf("DIFF=%d",b-a);
	}
	
	else if(c>=a && c>=b)
	{
		if(a>=b)
		printf("DIFF=%d",c-b);
		else
		printf("DIFF=%d",c-a);
	}
	return 0;
}
