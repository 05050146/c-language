#include <stdio.h>
 int main(void)
{
	int n[30][2]={88,99,66,78,46,93};
	int sum[20]={0};

	int i,j;
/*	for(i=0;i<30;i++)
	{
		for(j=0;j<2;j++)
		scanf("%d %d",&n[i][j]);
		if(n[i][0]==0)
		break;
		
	}
*/
	for (i=0;n[i][0]!=0;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",n[i][j]);
			sum[i]+=n[i][j];
			
		}
		printf("= %d \n",sum[i]);
		
	}
		
 	return 0;
}
