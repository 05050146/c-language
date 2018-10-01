//先從鍵盤讀入該月的1日為星期幾，再從鍵盤讀入日數(1-30)，找出該日為星期幾(0表示星期日
#include <stdio.h>
int main(void)
{
	int a,b;
	
	scanf("%d",&a);
	scanf("%d",&b);
	
	printf("1=%d\n",a);
	printf("%d=%d",b,(b+a-1)%7);
	return 0;
} 
