#include <stdio.h>
int afunc(int n);

int main(void)
{
	int n;
	
	scanf("%d",&n);
	printf("[%d]",afunc(n));
	
	return 0;
} 

int afunc(int n)
{
	int i=1,s=0;
	while(n>0)
	{
		s++;
		n/=2;
	}
	return s;
	
}
