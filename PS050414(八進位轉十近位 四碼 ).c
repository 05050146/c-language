//八進位轉十近位  
#include <stdio.h>
int main (void)
{
	int a,b,c,d,e;
	scanf("%d",&a);
	b=a%10;
	c=(a-b)%100;
	d=(a-b-c)%1000;
	e=a/1000;
	
	
	printf("%d=%d",a,e*512+d/100*64+c/10*8+b*1);
	
	return 0;
}
