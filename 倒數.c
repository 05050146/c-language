#include <stdio.h>

int afunc(int n);
int main (void)

{
	int n;
	
	scanf ("%d",&n);
	printf("%d",afunc(n));
	
	return 0;	
}

int afunc(int n)
{
	int s = 0;
	
	for (;n>0;)
	{
		s = s*10+n%10;
		n/=10;
	}
	return n;
}

