#include <stdio.h>
int main(void)
{
	int a,b=1;
	scanf("%d",&a);
	for(;a>=10;b++)
	{
		a=a/10;	
	}

	
	printf("%d",b);
	return 0;
}
