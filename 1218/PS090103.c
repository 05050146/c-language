#include <stdio.h>

int main(void)
{
	int num[20],a;
	int end,i,s=0;

	
	for(i=0;i<20;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]==0)
			break;
	}
	
	end=i;
	scanf("%d",&a);
	for (i=end-1;i>=0;i--)
	{
		if(num[i]==a)
		s++;
	}
		printf("%d",s);
		
	
	return 0;
}
