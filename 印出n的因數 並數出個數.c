#include <stdio.h>
int main (void)
{
	int a,b,c=0;
	
	scanf("%d",&a);
	printf("因數為:");
	
	for (b=1;b<=a;b++)
	{
		if(a%b==0)
		printf("%d ",b);
		if(a%b==0)
		c++;
	
	}
	printf("\n總共有%d個",c);
	return 0;
}

