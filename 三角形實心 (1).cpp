#include <stdio.h>
int main (void) 
{
	int a,b,c,d;
	
	scanf("%d",&a);
	
	for (b=1;b<=a;b++)
	{
		for (d=0;d<a-b;d++)
		{
			printf (" ");
		}
	
	
		for (c=1;c<=b*2-1;c++)
		{
			printf("*");
		}
	
	printf("\n");
	}
	return 0;
}
