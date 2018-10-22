#include <stdio.h>
int main(void)
{
	int a,b=1;
	scanf("%d",&a);
	
	while(b<=a)
	{
		printf("%d",b);
		b++;
		if(b>a)
		break;
		printf(",");
	}
}

