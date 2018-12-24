#include <stdio.h>
int main(void) 
{
	int a,end=0,i=0,gg[80];
	scanf("%d",&a);
	while(a>0)
	{
		gg[end++]=a%2;
		a/=2;
	}
	for(i=end-1;i>=0;i--)
	printf("%d",gg[i]);
}
