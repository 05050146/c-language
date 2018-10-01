#include <stdio.h>
int main (void)
{
	int a,b,c,d;
	scanf("%d",&a);
	
	for(b=1;b<a;b++)
	{
		if(b!=1)
		printf("*");
		for (c=2;c<b;c++)
		{	
			printf("@");
			
			
		}
		
		printf("*");
		printf("\n");
		
	}
for(d=1;d<=a;d++)
{
	printf("*");
}
	return 0;
}
