//方格填入字母 
#include <stdio.h>
int main(void)
{
	int a,b,f;
	char c;
	scanf("%d %d",&a,&b);
	
	f=(a*5+b)%26+65;//算出第幾格 再跟26取餘數 再利用ASCLL印出 
	printf("(%d,%d)=%c",a,b,f);
	
	return 0;
}
