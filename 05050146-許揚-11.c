#include <stdio.h>
int main (void)
{
	int a,b,c;//設定3個變數 
	printf("請輸入整數 A:");
	scanf("%d",&a);
	
	printf("請輸入整數 b:");
	scanf("%d",&b);
	
	printf("輸入:");
	for(c=b;c<a;c++)//設定迴圈判斷 
	{
		if(c%b==0)//如果c跟b取餘數為0,就印出來 
		printf("%d ",c);
		
	}
	return 0;
}
