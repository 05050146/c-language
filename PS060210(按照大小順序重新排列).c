#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	d=a%10;
	c=(a-d)%100/10;
	b=a/100;
	
	if(b>c && b>d)
	{
		if(c>d)
		printf("%d%d%d",b,c,d);	
		
		else
		printf("%d%d%d",b,d,c);	
	}
	if(c>b && c>d)
	{
		if(b>d)
		printf("%d%d%d",c,b,d);	
		
		else
		printf("%d%d%d",c,d,b);	
	}
	if(d>c && d>b)
	{
		if(b>c)
		printf("%d%d%d",d,b,c);	
		
		else
		printf("%d%d%d",d,c,b);	
	}

}
 
