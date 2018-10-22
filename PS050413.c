#include <stdio.h>
int main(void)
{
	int a,b,c,d,e,s=0;
	
	scanf("%d",&a);
	if(a>0)
	{
		e=a%10;
		d=a/10%10;
		c=a/100%10;
		b=a/1000;
		s=b*8+c*4+d*2+e;
		
	}
	printf("%d",s);

	return 0;
}
