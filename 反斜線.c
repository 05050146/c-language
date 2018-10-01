#include <stdio.h>
int main (void) 
{
	int a,b,c;
	scanf("%d",&a);
	
	
	for (b=1;b<=a;b++)
	{
		printf("*");
		printf("\n");
		
		for(c=1;c<=b;c--)
		{
			printf(" ");
		
		}
	}
		
	
	return 0;
}
