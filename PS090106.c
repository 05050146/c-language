#include <stdio.h>

int main(void)
{
	int num[80];
	int end,i;

	
	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]==0)
			break;
	}
	end=i;
	for (i=end-1;i>=0;i--)
		printf("%d ",num[i]);
		
	
	return 0;
}

