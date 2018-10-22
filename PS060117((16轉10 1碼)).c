#include <stdio.h>
int main (void)
{
	
	int a;
	scanf("%c",&a);
	
	if(a>='A' && a<='F')
	{
		printf("%c=%d",a,a-'A'+10);
	}
	else if(a>='0' && a<='9')
	printf("%c=%c",a,a);
	return 0;
 } 
