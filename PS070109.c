////到m為止的 n所有倍數 總和 
#include <stdio.h>
int main (void)
{
	int n,m,i,k=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
		{
			k=k+i;
		}
		
	
	}
	printf("ANS=%d",k);
	return 0;
 } 
