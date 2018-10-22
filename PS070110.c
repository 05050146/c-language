//計算出從1到N，為M的倍數的個數
#include <stdio.h>
int main(void)
{
	int n=0,m,j=0,k;
	scanf("%d %d",&n,&m);
	for(k=1;k<=n;k++)
	{
		if(k%m==0)
		j++;
	}
	printf("ANS=%d",j);
}
