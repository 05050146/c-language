//°f®ÉÄÁ¦L¥X¦r¥ÀZ~A 
#include <stdio.h>
int main(void)
{
	int a,b,c=0;
	scanf("%d",&a);
	b=a%26;
	for(;b>=1;b--)
	{
		c--;
	}
	printf("%d=%c",a,c+90);
	return 0;
}
