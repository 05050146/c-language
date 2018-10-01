//八進位轉十進位 
#include <stdio.h>
int main(void)
{
	int a,b,c,d;
	scanf("%d",&a);
	b=a%10;//取出個位數 
	c=(a-b)%100/10;//取出十位數 
	d=a/100;//取出百位數 
	printf("%d = %d",a,d*64+c*8+b);
	return 0;
}
