#include <stdio.h>
int main (void) 
{
	int a,b,c;
	scanf("%d",&a);
	
	for (b=1;b<=a;b++)
	{
	
		for (c=1;c<a-b+1;c++)
		{
			printf(" ");
			
	
		}	
		printf("*\n");
	}
	
	return 0;
}	
