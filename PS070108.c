//��m��� n�Ҧ����� 
#include <stdio.h>
int main (void)
{
	int n,m,i,k=0;
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++)
	{
		if(i%m==0)
		printf("%d ",i);

	}
	
	return 0;
 } 
