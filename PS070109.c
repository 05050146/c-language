////��m��� n�Ҧ����� �`�M 
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