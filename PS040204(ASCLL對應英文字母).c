//請從鍵盤讀入1個32至126的整數，並將ASCII碼為所讀入整數的字元顯示在畫面上。
#include <stdio.h>
int main(void)
{
	int a;
	char c;
	scanf("%d",&a);
	
	printf("ASCII %d=%c",a,a); 
	
	return 0;
}
