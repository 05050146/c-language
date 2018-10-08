#include <stdio.h>
int main(void)
{
	int a,b,c=0;
	scanf("%d",&a);
	b=a%26;

	printf("%d=%c",a,b+65);
	return 0;
}
