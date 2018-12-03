#include <stdio.h>

int main(void)
{
	int num[80];
	int end,i,s;

	
	for(i=0;i<80;i++)
	{
		scanf("%d",&num[i]);
		if(num[i]==0)
			break;
	}
	
	end=i;
	scanf("%d",&s);
	if(s>=end)
		printf("NO");
	for (i=0;i<end;i++)
	{
		if(i==s)
		printf("%d",num[s]);
		
	}
		
		
	
	return 0;
}
