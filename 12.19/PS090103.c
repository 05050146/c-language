#include <stdio.h>
int main(void) 
{
	int i,a[20],gg,end=0;
	for(i=0;i<20;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		break;
	}
	scanf("%d",&gg);
	for(i=0;a[i]!=0;i++)
	{
		if(a[i]==gg)
		end++;
	}
	printf("%d",end);
	return 0;
}
