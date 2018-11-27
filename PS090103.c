#include <stdio.h>

int main(void)
{
	int num[80],end,i,n,j=0;

	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]==0)
			break;
	}
	end=i;
	scanf("%d",&n);
	for (i=0;i<end;i++)
		if(num[i]==n)
		j++;
		printf("%d ",j);

	return 0;
}

