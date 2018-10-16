#include <stdio.h>
int main (void)
{
	
	int a;
	scanf("%d",&a);
	
	if(a>=10 && a<=15)
	{
		printf("%d=%c",a,a-10+'A');
	}
	else 
	printf("%d=%d",a,a);
	return 0;
 } 
