#include <stdio.h>
int main (void)
{
	char a,b,c,d,e;
	scanf("%c",&a);
	
	if(a>='A'&&a<='F')
	{
		a=a-'A'+10;
		e=a%2;
		d=(a-e)/2%2;
		c=(a-e-d*2)/4%2;
		b=(a-e-d*2-c*4)/8;
	}
	else if(a>='0'&&a<='9')
	{
		a=a-'0';
		
		e=a%2;
		d=(a-e)/2%2;
		c=(a-e-d*2)/4%2;
		b=(a-e-d*2-c*4)/8;
	}
	printf("%d%d%d%d",b,c,d,e);
	return 0;
}
