#include <stdio.h>
int main (void)
{
	
	int a,i,b=0;
	scanf("%d",&a);
	for(;a>=1;a/=10)
	{
		b+=a%10;
		
	}
	printf("%d",b);
	
	return 0;
 } 
