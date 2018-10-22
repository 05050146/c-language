//讀入一個正整數(N)，在畫面上顯示連續的*號
#include <stdio.h>
int main(void)
{
	int a,i;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		if(i>=11)
		if(i%10==1)
		printf("\n");
		
		printf("*");
	}

}
