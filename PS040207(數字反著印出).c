// 從鍵盤讀入1個100-999的整數，並將所讀入整數的個位數字跟百位數字對調後顯示在畫面上
#include <stdio.h>
int main(void)
{
	int a,i,j,k;
	scanf("%d",&a);
	
	i=a%10;//取出個位數 
	j=(a-i)%100;//取出十位數 
	k=a/100;//取出百位數 
	
	printf("%d",i*100+j+k);
	
	
	return 0;
}
